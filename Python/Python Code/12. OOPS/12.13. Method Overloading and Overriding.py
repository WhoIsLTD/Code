# Method Overloading # Method Overriding

class student:
    def __init__(self,m1,m2):
        self.m1=m1
        self.m2=m2
        print(m1+m2)
    def sum(self,a,b,c=0):
        s=a+b+c
        print(s)


s=student(10,20)
s.sum(10,20)

class A:
    def show(self):
        print("Class A")

class B(A):
    def __init__(self):
        print("B")

    def show(self):
        print ("Class is B")

b=B()
b.show()