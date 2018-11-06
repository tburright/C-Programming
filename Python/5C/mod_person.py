class Person():
    name = None
    age = None
    gender = None

    def __init__(self, name):
        self.name = name

    # Function to show all of the persons details
    def printDetails(self):
        print "Name: {}".format(self.name)
        print "Age: {}".format(self.age)
        print "Gender: {}".format(self.gender)

    # Setters
    def setName(self, name):
        self.name = name
    def setAge(self, age):
        self.age = age
    def setGender(self, gender):
        self.gender = gender

    # Getters
    def getName(self):
        return self.name
    def getAge(self):
        return self.age
    def getGender(self):
        return self.gender