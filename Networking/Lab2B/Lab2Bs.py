"""Ghozt Lab2B"""
from socket import *
import json

s = socket(AF_INET, SOCK_DGRAM)
s.bind(("",15000))

while True:
    data, addr = s.recvfrom(1096)
    print("Received data from: {}".format(addr))
    print("Received data type: {}".format(type(data)))
    print("Received data: {}".format(data))

    data2 = json.loads(data)
    print("\nConverted data type: {}".format(type(data2)))
    print("Converted data: {}\n\n".format(data2))

    resp = "Good copy"
    s.sendto(resp, addr)