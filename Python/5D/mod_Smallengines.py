class Engine():
    type2 = "V"

    def __init__(self, size):
        if (size == "2"):
            self.type2 = "V-Twin"
        elif (size == "4"):
            self.type2 = "V4"

    def getType(self):
            return self.type2