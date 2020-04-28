from Hangman import Hangman

hangman = Hangman()
hangman.readFile("e:/Code/Python/JuSt MiNi GaMe/HangMan/Hangman.txt")
hangman.chooseWord()

fails = 0

while fails < 5:
    hangman.printWordDash()

    char = input("Enter a character: ")

    if hangman.checkGuess(char):
        print("Correct Guess")
        hangman.replaceDash(char)
    else:
        print("Wrong Guess")
        fails += 1

    if hangman.checkWordGuess():
        hangman.printWordDash()
        print("You guess the word!")
        break

    print("Attempts Left: " + str(5-fails))

else:
    print("You Failed!")
