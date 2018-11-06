from socket import *
s = socket(AF_INET, SOCK_STREAM)
s.bind(("",15000))
s.listen(5)
c,a = s.accept()

print("Incomming connection from: {}".format(a))
data = c.recv(1024)
print("Incomming data: {}".format(data))

print("Sending 'Hello Yourself'")
c.send("Hello Yourself")

print("Sending goodbye")
c.send("Goodbye")
c.close()