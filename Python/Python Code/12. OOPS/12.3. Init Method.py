# create init and how init is used in a class

class comp:
    def __init__(self,CPU,ram):
        self.CPU= CPU
        self.ram =ram

    def printin(self):
        print("Printin",self.CPU,self.ram)

f1=comp(500,"8GB")
f2 = comp(400, "6GB")
f1.printin()
f2.printin()