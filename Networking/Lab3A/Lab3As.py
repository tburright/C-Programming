"""Ghozt Lab3A"""
from socket import *
import struct

# Setup a socket
s = socket(AF_INET, SOCK_STREAM)
s.bind(("",15000))
s.listen(5)
c,a = s.accept()

print("Incomming connection from: {}".format(a))
data = c.recv(1024)
print("Incomming data: {}".format(data))

# Print unpacked
print("Little INDIAN: {}".format(struct.unpack('<HIhi', data)))
print("BIG INDIAN: {}".format(struct.unpack('>HIhi', data)))

c.close()