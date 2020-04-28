# O(1)
print("O(1)")
a= 1
b=0
if a > b:
    print("A greater than b")
else:
    print("A not greater than b")

#O(log n)
# Searching a product in binary tree.

#O(n)
print("O(n)")
data = [1,2,3,4,5]
for v in data:
    print(v)

#O(n log n)
print("N log n")
def bubble_sort(data):
    swapped = True
    while swapped:
        swapped = False
        for i in range(len(data)-1):
            if data[i] > data[i+1]:
                data[i], data[i+1] = data[i+1], data[i]
                swapped = True
if __name__ == '__main__':
    data = [9, 1, 7, 6, 2, 8, 5, 3, 4, 0]
    bubble_sort(data)
    print(data)

# O(2^N)
print("2 power N")
def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n-1) + fibonacci(n-2)
print(fibonacci(5))
# O(N^2)
print("N square")
dat = [0,1,2,3]
for x in dat:
        for y in dat:
            print(x, y)
