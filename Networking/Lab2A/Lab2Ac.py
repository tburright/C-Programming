"""Ghozt Lab2A"""
from socket import *

# Setup a socket
s = socket(AF_INET, SOCK_STREAM)
s.connect(("localhost",15000))

print('Sending "Hello World"')
s.send("Hello World")

resp = s.recv(1024)
print("Recieved: {}".format(resp))
s.recv(1024)