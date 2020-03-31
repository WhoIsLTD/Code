import random

min = int(input("Nhập vào min: "))
max = int(input("Nhập vào max: "))

Machine = random.randint(min, max)
Times = 0

while True:
    YourGuess = int(input("Số bạn đoán: "))
    Times += 1
    if YourGuess != Machine:
        if YourGuess < Machine:
            print("Hmmzz cao hơn nữa.")
        else:
            print("Hmmzz nhỏ hơn đi!!")       
    else:
        print('''Chúc mừng bạn đã đoán đúng!
        Bạn mất %d lượt''' %Times)
        break

