#usage of constructor and Self

class comp:
    def __init__(self,CPU,ram):
        self.CPU= CPU
        self.ram =ram

    def printin(self):
        print("Printin",self.CPU,self.ram)
    def compare(self,other):
        if self.ram ==other.ram:
            print("Ram is same")
        else:
            print("Its differnt")

f1=comp(500,"8GB")
f2 = comp(400, "6GB")
f1.ram = "6GB"
f1.printin()
f1.compare(f2)