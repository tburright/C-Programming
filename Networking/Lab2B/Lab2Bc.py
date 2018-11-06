"""Ghozt Lab2B"""
from socket import *
import json

s = socket(AF_INET, SOCK_DGRAM)

msg = {"Test1": 1, "Test2": 2, "Success": True}
msg = json.dumps(msg)

print("Sending JSON data: {}".format(msg))
s.sendto(msg,("localhost", 15000))

data, addr = s.recvfrom(1096)
print("Received data: {}".format(data))
print("From: {}".format(addr))
