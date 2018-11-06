"""Ghozt ch4 PLA Server"""
from socket import *
import struct

# Setup a socket
s = socket(AF_INET, SOCK_STREAM)
s.bind(("",15000))
s.listen(5)
c,a = s.accept()

# Output info
print("Incomming connection from: {}".format(a))
data = c.recv(1024)
# print("Incomming data: {}".format(data))
stuff = struct.unpack('!IIccII', data)
print("Unpacked Network order: {}\n".format(stuff))

# Format for binary and hex
print("Intended format:")
print("[0]: {}".format(stuff[0]))
print("[1]: {}".format(stuff[1]))
print("[2]: {}".format(stuff[2]))
print("[3]: {}".format(stuff[3]))
print("[4]: {}".format(hex(stuff[4])))
print("[5]: {}".format(bin(stuff[5])))

# Send goodbye message and close socket
print("\nSending goodbye")
c.send("Goodbye")
c.close()