from mod_BigEngines import Engine
from mod_seats import Seats

class Truck(Engine, Seats):
    def __init__(self, name, size, seats):
        Engine.__init__(self, size)
        Seats.__init__(self, seats)
        self.name = name

    # # Function to get all of the hero object info
    # def getInfo(self):
    #     print(self.heroname)
    #     person.getName()
    #     Person.getAge()
    #     Person.getGender()