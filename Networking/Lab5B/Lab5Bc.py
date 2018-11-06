"""Ghozt Lab 5A client"""
from socket import *

# Setup a socket
s = socket(AF_INET, SOCK_STREAM)
s.connect(("localhost",15000))

# Initial guess
guess = raw_input("Guess a number from 1-100: ")
s.send(guess)

# Main game loop
while True:
	data = s.recv(1024)
	if data != "You Win!":
		print data
		guess = raw_input("Guess a number: ")
		s.send(guess)
	else:
		print data
		break

# We win! Close socket
s.send("Goodbye")
s.close()