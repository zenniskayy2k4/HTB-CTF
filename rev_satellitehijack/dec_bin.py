# dec_bin.py
XOR_KEY = 42

try:
    with open("encrypted_code.bin", "rb") as f_in:
        encrypted_data = f_in.read()
except FileNotFoundError:
    print("Lỗi: Không tìm thấy file encrypted_code.bin. Hãy chắc chắn bạn đã export nó từ Ghidra.")
    exit()

decrypted_data = bytearray()
for byte in encrypted_data:
    decrypted_data.append(byte ^ XOR_KEY)

with open("decrypted_code.bin", "wb") as f_out:
    f_out.write(decrypted_data)

print("Đã giải mã thành công! File 'decrypted_code.bin' đã được tạo.")