from mod_SmallEngines import Engine
from mod_seats import Seats

class Car(Engine, Seats):
    def __init__(self, name, size, seats):
        Engine.__init__(self, size)
        Seats.__init__(self, seats)
        self.name = name
