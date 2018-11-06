"""Ghozt Lab 5A server"""
from socket import *
import random

secret_number = random.randint(1,101)
print "the secret number is: ", secret_number

# Setup a socket
s = socket(AF_INET, SOCK_STREAM)
s.bind(("",15000))
s.listen(5)
c,a = s.accept()

# Output info
print("Incomming connection from: {}".format(a))

# Main game loop
while True:
	data = c.recv(1024)
	print data
	# Check to see if they are correct
	if int(data) != secret_number:
		if int(data) > secret_number:
			print("Incorrect. Secret number is lower.")
			c.send("Incorrect. Secret number is lower.")
		elif int(data) < secret_number:
			print("Incorrect. Secret number is higher.")
			c.send("Incorrect. Secret number is higher. ")
		else:
			print "error"
	else:
		break

print("\nYou win!")
c.send("You Win!")

# Listen for goodbye
data = c.recv(1024)
if data == "Goodbye":
	c.close()
