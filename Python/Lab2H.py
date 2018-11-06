"""
Ghozt
Lab2H
Create a program that takes input of a group of students' names and grades... 
then sorts them based on highest to lowest grade. 
Then calculate and print the sorted list and the average for the class. (Hint: Use Dictionaries!)
"""
totalStudents = 0
average = 0
my_dict = {}

# User input error checking
while totalStudents is 0:
	try:
		# Try to set totalStudents to user input int
		totalStudents = int(raw_input("How many students would you like to add?: "))
		break
	except:
		# User input was not an int
		print("Invalid... Try again -.-\n")

# Loop through each student
for i in range(1, totalStudents + 1):
	# Request student name and grade
	studentName = raw_input("What is studens #{}'s name?: ".format(i))
	studentGrade = int(raw_input("What is {}'s grade?: ".format(studentName)))
	# Insert student name and grade into dictionary
	my_dict[studentName] = studentGrade
	print #Because new line

# Use sorted() to create a new list of descending grades
sorted_d = sorted(my_dict.items(), key=lambda x: x[1], reverse = True)

print "[Student list by highest grade]"
# Loop through amount of items in sorted list for fancy output and average counting
for x in range(len(sorted_d)):
    print "{} - {}".format(sorted_d[x][0], sorted_d[x][1]) 
    average = average + sorted_d[x][1]

# Print class average
print "\nClass average: ", (average / totalStudents)