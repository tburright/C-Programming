"""
Ghozt
Lab 3E Fib



Instructions:

    Write a file that prints out the first 100 numbers in the Fibonacci sequence iteratively
    Revist this lab and create a Fibonacci recursive function
Requirments:
    Adhere to PEP8 (Comments, formatting, style, etc)
    Utilize proper formatting
    Utilize proper and clean loops and conditionals
    Follow instructions above

"""
# Ser variables needed for fib seq
counter = 0;
a = 0
b = 1
print "Loop method: "

"""
Purpose: look through 20 times (because 100 is slow)
argument: number of total fib numbers
"""

for i in xrange(20):
    print a 
    counter = a + b
    a = b;
    b = counter

# Looping function to iterate and print over fib2 function
def fib1(n):
	for i in xrange(n):
		print(fib2(i))

def fib2(n):
    if n == 1:
        return 1
    elif n == 0:   
        return 0            
    else:     
        return fib2(n-1) + fib2(n-2)

print "\nRecursive function method: "
fib1(20)