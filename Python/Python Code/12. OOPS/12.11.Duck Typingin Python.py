#Duck Typing

class football:
    def bounce(self):
        print("This is football")

class cricket:
    def bounce(self):
        print("This cricketball")

class ball:

    def bounce(self,weight):
        weight.bounce()

weight = cricket()
b=ball()
b.bounce(weight)

