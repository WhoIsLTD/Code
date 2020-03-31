# Instance, Class, Static

class section:

    total_section = 3

    def __init__(self,s1,s2,s3):
        self.s1=s1
        self.s2=s2
        self.s3=s3
    @staticmethod
    def flag():
        print("This school has a flag")
    def tot(self):
        print(self.s1+self.s2+self.s3)

    @classmethod
    def totalsec(cls):
        print(cls.total_section)

sec= section(10,20,30)
print(sec.s1)
sec.tot()
sec.totalsec()
sec.flag()



