"""
Ghozt
Lab2E

Instructions:
	Write a program that takes a string as user input then counts the number of words in that sentence.
	Bonus: Add additional functionality, experiment with other string methods.
	ex: Output number of characters, number of uppercase letters, etc...
"""
uppers = 0
lowers = 0

my_String = raw_input("Input a string: ")

for i in my_String:
      if(i.islower()):
            lowers = lowers + 1
      elif(i.isupper()):
            uppers = uppers + 1
            
print "\nTotal words: ", len(my_String.split())
print "Total letters: ", len(my_String.replace(" ", ""))
print "Total uppercase: ", uppers
print "Total lowercase: ", lowers