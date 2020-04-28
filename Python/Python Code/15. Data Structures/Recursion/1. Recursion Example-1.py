#Factorial. 3! = 3*2*1

def fact(x):
    if(x<=0):
        return 1
    else:
        return(x*fact(x-1))


num= int(input("Enter the factorial:"))
print(fact(num))