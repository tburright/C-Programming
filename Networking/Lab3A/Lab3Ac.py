"""Ghozt Lab3A"""
from socket import *
import struct

# Setup a socket
s = socket(AF_INET, SOCK_DGRAM)
s.connect(("localhost",15000))

# Pack it
packed = struct.pack('=HIhi', 1, 2, -3, -4) 

print('Sending struct')
s.send(packed)

s.close()