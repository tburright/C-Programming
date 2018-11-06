"""Ghozt Lab2D"""
from socket import *

user_domain = raw_input("Please enter a domain: ")

domain_info = gethostbyname(user_domain)

print("\n{} Hostname: {}".format(user_domain, gethostbyaddr(domain_info)[0]))
print("{} IP: {}".format(user_domain, domain_info))