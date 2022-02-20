from Hardware import Hardware

class Memory(Hardware):
    freq = ""
    mSize = ""
    sCuda = ""

    # constructor
    def __init__(self):
        self.freq = ""
        self.mSize = ""
        self.supportsCuda = ""

    # set memory frequency
    def set_freq(self, frequency):
        self.freq = frequency
    # set memory frequency
    def get_freq(self):
        return self.freq

    # set memory memorySize
    def set_mSize(self, memorySize):
        self.mSize = memorySize
    # set memory memorySize
    def get_mSize(self):
        return self.mSize

    # set memory supportsCuda
    def set_sCuda(self, supportsCuda):
        self.sCuda = supportsCuda
    # set memory supportsCuda
    def get_sCuda(self):
        return self.sCuda