"""Ghozt Lab3B"""
from socket import *

# Set up first socket
s = socket(AF_INET, SOCK_DGRAM)
s.bind(("",15000))

data, addr = s.recvfrom(1096)
new_port = addr[1]
print("Received data from: {}".format(addr))

# Split and sort by length
msg = " ".join(sorted(data.split(), key=len))

print("Before: {}".format(data))
print("After: {}".format(msg))

# Second socket
t = socket(AF_INET, SOCK_DGRAM)
t.sendto(msg,("localhost", new_port + 1))
print "Sent to: ", (new_port +1)