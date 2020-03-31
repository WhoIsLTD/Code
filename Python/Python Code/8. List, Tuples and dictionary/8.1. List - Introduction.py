# Creating List  # Accessing List # Updating List # Delete List

a = [1, 2, 3, 4, 5]
b = ["abc", "xyz", "iou"]

print(a[0])
print(b[2])

print("Before update", a)
a[0] = 6
print("After update", a)
b[2] ="def"
print(b)

print("Before deletion", a)

del a[2]
print("Deletion Deletion", a)

del b[2]
print(b)