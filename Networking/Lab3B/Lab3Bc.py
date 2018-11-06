"""Ghozt Lab3B"""
from socket import *

# Setup socket 1
s = socket(AF_INET, SOCK_DGRAM)
msg = "three one eleven four"

print("Sending data: {}".format(msg))
s.sendto(msg,("localhost", 15000))

# Get senders port number and increase 1
new_port = s.getsockname()[1] + 1
print new_port
s.close()

# Setup socket 2
t = socket(AF_INET, SOCK_DGRAM)
t.bind(("", new_port))

print("Bound to: {}".format(new_port))

data, addr = t.recvfrom(1096)
print data

t.close()
