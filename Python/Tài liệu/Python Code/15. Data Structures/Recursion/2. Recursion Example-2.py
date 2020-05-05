#Fibonacci series.. 0,1,1,2,3,5,8....n
def fib(x):
    if (x<=1):
        return x
    else:
        return (fib(x-1)+fib(x-2))


term = int(input("Enter the terms of Fibo:"))
for it in range(term):
    print(fib(it))

