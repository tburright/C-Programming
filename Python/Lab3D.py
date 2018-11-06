"""Ghozt
Lab3D

Instructions
    Write a program that prompts a user to input an integer and calculates the factorial of that number using a while loop.
"""

# Request user input as int
number = int(raw_input("Enter a number: "))

# Make placeholder for solution
tempNumber = number
count = (number - 1)

# Loop until no more numbers to mulitply by
while count > 0:
    print('%d X %d = %d' % (tempNumber, count, tempNumber * count))
    tempNumber *= count
    # Decrease amount of remaining
    count -= 1
# No numbers left to multipe by. Loop complete!
else:
	# #profit
    print('\nWhile loop complete! \n%d! = %d' % (number, tempNumber))