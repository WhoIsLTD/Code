
class student:

    def __init__(self,name,id):
        self.name=name
        self.id=id
        self.laptop=self.laptop

    def show(self):
        print(self.name,self.id,student.laptop)
    class laptop:
        def __init__(self):
            self.brand = "dell"
            self.pro="i5"
            self.ram = 8
        def show (self):
            print(self.brand,self.pro,self.ram)

s1= student('abcd',1)

s1.show()
lap = student.laptop()
lap.show()