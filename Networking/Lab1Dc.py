from socket import *
s = socket(AF_INET6, SOCK_DGRAM)

msg = "Hewwo World..."
s.sendto(msg,("localhost", 15000))

data, addr = s.recvfrom(1096)
print data
print addr