import random as rd

def roll(n):
    if n == 'y':
        r = rd.randint(1, 6)
        if r == 1:
            print("___________")
            print("|         |")
            print("|    0    |")
            print("|_________|")
        elif r == 2:
            print("___________")
            print("|         |")
            print("|  0   0  |")
            print("|_________|")
        elif r == 3:
            print("___________")
            print("|    0    |")
            print("|    0    |")
            print("|____0____|")
        elif r == 4:
            print("___________")
            print("|  0   0  |")
            print("|         |")
            print("|__0___0__|")
        elif r == 5:
            print("___________")
            print("|  0   0  |")
            print("|    0    |")
            print("|__0___0__|")
        else:
            print("___________")
            print("|  0   0  |")
            print("|  0   0  |")
            print("|__0___0__|")
    else:
        print("Stop!")
while True:
    n = input("Nhan 'y' de tiep tuc(nhan bat ki de dung): ")
    roll(n)
    if n != 'y':
        break

