from socket import *
s = socket(AF_INET, SOCK_DGRAM)
s.bind(("",15000))

while True:
    data, addr = s.recvfrom(1096)
    print data
    print addr
    resp = "Good copy"
    s.sendto(resp, addr)