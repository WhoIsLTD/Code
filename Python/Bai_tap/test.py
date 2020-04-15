
a = {
    'A' : ['B','C'],
    'B' : ['D', 'E'],
    'C' : ['F'],
    'D' : [],
    'E' : ['F'],
    'F' : []
}

s = []
s1 = []
def dfs(a, s, key, key2):
    if(a[key] != [] or key =='F'):
        s.append(key)
        print(s)
    
    for i in a[key]:
        if 'F' in s:
            break
        dfs(a, s, i, key2)
dfs(a, s, 'A', 'F')
