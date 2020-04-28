h = []
c = []

for i in range (1, 9):
    m = int(input())
    h.append(m)
    n = int(input())
    c.append(n)
co = 0
# kiem tra list co ptu trung nhau hay khong (hang, cot)
def duplicate (lst):
    return len(lst) != len(set(lst))
if duplicate(h) == True or duplicate(c) == True:
    co = 1
#kiem tra duong cheo    
for i in range (0, 8):
    for j in range (0, 8):
        for k in range (0, 8):
            for l in range (0, 8):
                if (i == j and k == l and i != k and j != l):
                    if (h[i]+c[j] == h[k] + c[l] or h[i]-c[j] == h[k] - c[l] ):
                        co = 1
if (co == 1):
    print("YES")
else:
    print("NO")