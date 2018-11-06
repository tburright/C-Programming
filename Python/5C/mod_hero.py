from mod_person import Person

class Hero(Person):
    def __init__(self, heroname, name):
        Person.__init__(self, name)
        self.heroname = heroname

    # Function to get all of the hero object info
    def getInfo(self):
        print(self.heroname)
        person.getName()
        Person.getAge()
        Person.getGender()