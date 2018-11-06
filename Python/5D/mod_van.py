from mod_BigEngines import Engine
from mod_seats import Seats

class Van(Engine, Seats):
    def __init__(self, name, size, seats):
        Engine.__init__(self, size)
        Seats.__init__(self, seats)
        self.name = name