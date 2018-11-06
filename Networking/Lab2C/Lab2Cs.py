"""Ghozt Lab2C"""
from socket import *

s = socket(AF_INET, SOCK_DGRAM)
s.bind(("",15000))

while True:
    data, addr = s.recvfrom(1096)
    print("Received data from: {}".format(addr))
    print("Received data: {}".format(data))

    his_ip, dont_care = addr
    his_hostn, dont, care = gethostbyaddr(his_ip)

    print("Incomming IP: {}".format(his_ip))
    print("Incomming Hostname: {}\n\n".format(his_hostn))

    msg = "Your IP: " + his_ip + ", Your hostname: " + his_hostn
    s.sendto(str(msg), addr)