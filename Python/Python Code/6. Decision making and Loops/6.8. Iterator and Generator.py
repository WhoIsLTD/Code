
# # this builds an iterator object with memory in a single location
import sys

list  =[1,2,3,4,5,6]
it = iter(list) # this builds an iterator object
print(it)

#for x in it:
#    print(x, end=" ")




#generator is a function that produces or yields a sequence of values using yield method.
#When a generator function is called, it returns a generator object without even beginning
#execution of the function. When the next() method is called for the first time, the function
#starts executing, until it reaches the yield statement, which returns the yielded value. The
#yield keeps track i.e. remembers the last execution and the second next() call continues
# from previous value.

def fibonacci(n):
    a, b, counter = 0, 1, 0
    while True:
        if (counter > n):
            return
        yield a
        a, b = b, a + b
        counter += 1


c = fibonacci(5)


while True:
    try:
        print(next(c), end=" ")
    except StopIteration:
        sys.exit()