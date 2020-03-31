#Initial list
res = []

# Input lengths
lengths = int(input())

# Add element
for i in range(lengths):
    # Input elements
    n = int(input())
    res.append(n)

def oneTime(n):
    return n == n+1
list(filter(oneTime, res))