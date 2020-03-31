
class student:

    def __init__(self,m1,m2):
        self.m1=m1
        self.m2=m2
        print(m1+m2)
    def __add__(self, other):
        m1= self.m1+other.m1
        m2=self.m2+ other.m2
        print(m1,m2)

s1=student(10,20)
s2=student(30,40)
s3=s1+s2