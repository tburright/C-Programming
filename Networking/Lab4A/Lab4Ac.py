"""Ghozt ch4 PLA Client"""
from socket import *
import struct

# Setup a socket
s = socket(AF_INET, SOCK_STREAM)
s.connect(("localhost",15000))

# Pack data as network order
packed = struct.pack("!IIccII", 12345, 56789, "&", "*", 0x7d0, 0b11111010000)

print('Sending data')
s.send(packed)

# Wait for response and close socket
resp = s.recv(1024)
print("Recieved: {}".format(resp))
s.recv(1024)
s.close()