sentence = input()
end = sentence[-1]
sentence = sentence[:-1]
liste = sentence.split()[::-1]
print(liste)