"""Ghozt Lab2C"""
from socket import *

s = socket(AF_INET, SOCK_DGRAM)

msg = "Hello!"
print("Sending data: {}".format(msg))
s.sendto(msg,("localhost", 15000))

data, addr = s.recvfrom(1096)
print("Received data: {}".format(data))
print("From: {}".format(addr))
