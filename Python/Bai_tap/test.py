
a = {
    'A' : ['B','C'],
    'B' : ['D', 'E'],
    'C' : ['F'],
    'D' : [],
    'E' : ['F'],
    'F' : []
}
s = []
def dfs(a, s, key):
    if key not in s:
        s.append(key)
        print(s)
    for i in a[key]:
        dfs(a, s, i)
dfs(a, s, "A")
