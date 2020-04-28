# Constructer # constructor in mutiple and Multilevel # Super in Constructor
# Super in Method

class A:
    def __init__(self):
        print("Cons A")

    def fa(self):
        print("fa")

class B:
    def __init__(self):
        super().__init__()
        print("Cons B")

    def fb(self):
        print("fb")
class C(A,B):
    def __init__(self):
        print("Cons C")
    def fc(self):
        super().fa()
        print("fc")

C1= C()
C1.fc()