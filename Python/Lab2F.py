"""
Ghozt
LAB2F
    Instructions:
        Write a program that will be able to check if two words (strings) are anagrams.
        An anagram is a word or phrase formed by rearranging the letters of a different word or phrase
    The program should include:
        X All proper comments 
        ? Needed docstrings
        X User input (only expecting one user input due to not having gone over loops yet)
"""

# Request only one user input
string = raw_input("Enter a string consisting of two words seperated by a space: ")

# Split on " ", sort both parts, compare
print "Anagram result:", ''.join(sorted(string.split()[0])) == ''.join(sorted(string.split()[1]))