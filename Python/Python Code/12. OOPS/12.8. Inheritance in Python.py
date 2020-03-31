# Inheritance # types of Inheritance and usage

# Parent <--- Child

class A:
    def fa(self):
        print("fa")
class B:
    def fb(self):
        print("fb")
class C(A,B):
    def fc(self):
        print("FC")

C1=C()
B1=B()
# b--> A
# c--> b --> A  = Multilevel Inheritance

# b <-- C --> A