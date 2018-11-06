"""Ghozt
Lab 5B

Create a very simple super hero class. Some attributes you will need:

    Hero Name
    Real Name
    Power(s)
    Colors
    etc

    Adhere to PEP8 and utilize proper and efficient code
    Utilize a __init__()
    Ensure variables are correct type (class vs instance variables)
    Utilize methods:
        Start to format your class using getters and setters
    Create an instance of your class. Populate it with data utilzing a init and/or getters and setters
"""

# Hero class...
class Hero:

    def __init__(self, heroName, realName, power, colors):
        self.hName = heroName
        self.rName = realName
        self.power = power
        self.colors = colors

    def printDetails(self):
        print "Hero Name: {}".format(self.hName)
        print "Real Name: {}".format(self.rName)
        print "Power: {}".format(self.power)
        print "Colors: {}".format(self.colors)

    def changeHeroName(self, heroName):
        self.hName = heroName
        print("New hero name: {}".format(self.hName))

# Intialize x as hero object
x = Hero("Captain Trigger", "John Snow", "Super sarcasm", "Red and blue",)
x.printDetails()

print
# Change hero name using setter method
x.changeHeroName("Some New Hero Name")