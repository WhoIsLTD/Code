# choice(seq) A random item from a list, tuple, or string.
# randrange ([start,] stop [,step]): A randomly selected element from range(start,stop, step).
# random() A random float r, such that 0 is less than or equal to r and r is less than 1.
# shuffle(lst) Randomizes the items of a list in place. Returns None.
# uniform(x, y) A random float r, such that x is less than or equal to r and r is less than y.


import random
print("returns a random number in range(10) : ", random.choice(range(10)))

print("randrange : ", random.randrange(1, 100, 3))
print('random', random.random())

a = [1,2,3,4]
random.shuffle(a)
print("Shuffled random number list : ", a)
print("Random Float uniform : ", random.uniform(10, 20))