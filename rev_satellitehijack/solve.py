# Mảng key được lấy trực tiếp từ hàm FUN_0000008c
key = [
    0x6c, 0x35, 0x7b, 0x30, 0x76, 0x30, 0x59, 0x37, 
    0x66, 0x56, 0x66, 0x3f, 0x75, 0x3e, 0x7c, 0x3a, 
    0x4f, 0x21, 0x7c, 0x4c, 0x78, 0x21, 0x6f, 0x24, 
    0x6a, 0x2c, 0x3b, 0x66
]

# Phần bên trong ngoặc của flag
inner_part = ""

# Lặp 28 lần (0x1c = 28)
for i in range(len(key)):
    # Áp dụng công thức đảo ngược: input[i] = key[i] ^ i
    char_code = key[i] ^ i
    inner_part += chr(char_code)

# Ghép lại thành flag hoàn chỉnh
flag = "HTB{" + inner_part

print("[+] The control code is:")
print(flag)