# Instance, Static or class

class mob:

    battery = 4000

    def __init__(self,ram,cpu):
        self.ram=ram
        self.cam=cpu

m1=mob(8,16)
m2=mob(4,12)
print(m1.cam)
m1.cam=6
print(m1.cam)
m1.battery=3000
print(m1.battery)

print(m2.battery)
