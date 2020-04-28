
class student:
    def __init__(self):
        print("aa")

    def __del__(self):
        print("Del")

    def show(self):
        print("Show")

s=student()
s.show()