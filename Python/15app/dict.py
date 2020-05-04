import json

data = json.load(open("/media/E:/Code/Python/15app/original.json"))

def translate(word):
    if word in data:
        return data[word]
    else:
        print("Pugger your paw steps on wrong keys")
    
word = input("Enter the word you want to search")
output = translate(word)
print(output)