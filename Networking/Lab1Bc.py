from socket import *
s = socket(AF_INET6, SOCK_STREAM)
s.connect(("localhost",15000))

print("Sending Hello world")
s.send("Hello World")

resp = s.recv(1024)
print("Recieved: {}".format(resp))

s.recv(1024)