import random


class Hangman:
    def __init__(self):
        self.words = []
        self.word = ""
        self.word_dash = ""

    def readFile(self, filename):
        file = open(filename)

        for line in file:
            line = line.strip("\n")
            self.words.append(line)

        file.close()

    def chooseWord(self):
        min = 0
        max = len(self.words) - 1

        self.word = self.words[random.randint(min, max)]
        self.word_dash = "_" * len(self.word)

    def checkGuess(self, char):
        if char in self.word and char not in self.word_dash:
            return True
        else:
            return False

    def replaceDash(self, char):
        for x in range(len(self.word)):
            if self.word[x] == char:
                self.word_dash = self.word_dash[0:x] + char + self.word_dash[x+1:]

    def checkWordGuess(self):
        if "_" not in self.word_dash:
            return True
        else:
            return False

    def printWordDash(self):
        print(self.word_dash)
