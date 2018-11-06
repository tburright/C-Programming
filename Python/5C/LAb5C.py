"""Ghozt
Lab 5C
"""
from mod_hero import Hero

# Input validation function
def reqInfo(info):
    while(True):
        try:
            # Try to set temp variable to user input str
            thing = str(raw_input(info))
            break
        except:
            # User input was not an str
            print("Invalid... Try again -.-\n")
    return thing

# Request user input with error checking function
heroName = reqInfo("Enter a superhero name: ")
heroRName = reqInfo("Enter their real name: ")
heroAge = reqInfo("Enter their age: ")
heroGender = reqInfo("Enter their gender: ")

# Initialize first Hero of the Person class
hero1 = Hero(heroName, heroRName)
hero1.setAge(heroAge)
hero1.setGender(heroGender)

print "Hero #1: {} AKA {}, is a {} and is {} years of age.".format(hero1.heroname, hero1.getName(), hero1.getAge(), hero1.getGender())

# Initialize second Hero of the Person class
hero2 = Hero("Super Joe", "John Smith")

# Set some things
hero2.setAge(23)
hero2.setName("Bob Boring")
hero2.setGender("Male")

# Display info on Hero #1
print "Hero #2: {} AKA {}, is a {} and is {} years of age.".format(hero2.heroname, hero2.getName(), hero2.getAge(), hero2.getGender())

# Initialize third Hero of the Person class
hero3 = Hero("LASER FACE", "John Doe")

# Set soem things
hero3.setAge(69)
hero3.setGender("Male")

# Display info on Hero #2
print "Hero #3: {} AKA {}, is a {} and is {} years of age.".format(hero3.heroname, hero3.getName(), hero3.getAge(), hero3.getGender())