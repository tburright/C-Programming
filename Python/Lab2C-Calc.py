""" 
Ghozt 
Lab2C Calculator
9-4-18

Instructions: Write a program that calculates the total of an item, with taxes.
    Bonus: Add additional functionality
    Keep in mind that you have not learned Python formatting for print or user input.
        Simple/ugly printing is allowed here.
        Hard code the user input
"""

item1 = 1.50
item2 = 1.00
item3 = 5.50
taxRate = .0825
itemChoice = 0;

print "Current tax rate: 8.25%"
print "1.) Orange - 1.50"
print "2.) Banana - 1.00"
print "3.) Magic Apple - 5.50"
print #Because blank line

while itemChoice is 0:
	try:
		selection = input("What item would you like to buy? (Please select a number): ")
		break
	except:
		print("Please pick one of the available items...\n")

if selection == 1:
	print "\n1x Orange, 1.50"
	print "Total = ${:,.2f}".format(item1 + (item1 * taxRate))
elif selection == 2:
	print "\n1x Banana, 1.00"
	print "Total = ${:,.2f}".format(item2 + (item2 * taxRate))
elif selection == 3:
	print "\n1x Magic Apple, 5.50"
	print "Total = ${:,.2f}".format(item3 + (item3 * taxRate))
else:
	print "Please leave the store. Come back when you can follow directions."

print "\nWill that be cash or credit?"