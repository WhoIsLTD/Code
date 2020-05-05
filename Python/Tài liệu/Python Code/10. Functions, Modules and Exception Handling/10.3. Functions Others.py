# Anonymus function # Return Statement # Local vs Global variable

sum = lambda arg1 , arg2 : arg1+arg2

print(sum(1,2))

def sum1(a,b):
    total = a+b
    sub = b -a
    print(total)
    print(sub)
    return sub

sum1 (1,2)

def mul(c,d):
    mult = c*d
    print(mult)
    return
mul(2,3)

def div (mylist):
    mylist = [10,20,100]
    print(mylist)
    return
mylist = [10,20,30]
div(mylist)
print(mylist)
