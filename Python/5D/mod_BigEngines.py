class Engine():
    type2 = "V"

    def __init__(self, size):
        if (size == "6"):
            self.type2 = "V6"
        elif (size == "8"):
            self.type2 = "V8"

    def getType(self):
            return self.type2