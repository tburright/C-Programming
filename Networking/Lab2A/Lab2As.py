"""Ghozt Lab2A"""
from socket import *

# Takes in string and returned the words in reverse order
def reverseIt(text):
	return " ".join(text.split(" ")[::-1])

# Setup a socket
s = socket(AF_INET, SOCK_STREAM)
s.bind(("",15000))
s.listen(5)
c,a = s.accept()

print("Incomming connection from: {}".format(a))
data = c.recv(1024)
print("Incomming data: {}".format(data))

print("Sending {}".format(reverseIt(data)))
c.send(reverseIt(data))

print("Sending goodbye")
c.send("Goodbye")
c.close()