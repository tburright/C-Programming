"""Ghozt ch4 PLA Client"""
from socket import *

# Setup a socket
s = socket(AF_INET, SOCK_STREAM)
s.connect(("localhost",15000))

guess = raw_input("Guess a number from 1-100: ")
s.send(guess)

while True:
	data = s.recv(1024)
	if data != "You Win!":
		print data
		guess = raw_input("Guess a number: ")
		s.send(guess)
	else:
		print data
		break

# Wait for response and close socket
s.send("Goodbye")
s.close()