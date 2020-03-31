import random

shapes = {1 : "rock", 2 : "paper", 3 : "scissors"}
while True:
    You = int(input("Please input your number here and 1-rock 2-paper 3-scissors: "))
    if You in shapes:
        break
    print("Please input 1 or 2 or 3")       
Computer = random.randint(1, 3)
print('The shapes of you is: ', shapes[You])
print('The shapes of computer is: ', shapes[Computer])
if (You == 1) and (Computer == 3) or (You == 2) and (Computer == 1) or (You == 3) and (Computer == 2):
    print("You are the winner!")
elif You == Computer:
    print("You're tied to the computer")
else:
    print("Computer is the winner!")