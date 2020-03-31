# Required argument # Keyword Argument # Default argument # Variable Length Argument

def printstr(str):
    print(str)
    return
printstr(1)

def printme(id, name):
    print(id,name)
    return
printme(name="John", id=1)

def checkme(id, name = "John"):
    print(id,name)
    return
checkme(1 , "Steve")

def printmore(id, *vartuple):
    print(id)
    for i in vartuple:
        print(i)
    return
printmore(1)
printmore(1,2,3,4,5)