
graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []
}

s = []
path = []


def dfs(graph, s, key):
    if(key not in s):
        s.append(key)
    for i in graph[key]:
        dfs(graph, s, i)


dfs(graph, s, 'A')
print(s)


def dfs_paths(graph, start, goal, path):
    if path == []:
        path = [start]
    if start == goal:
        yield path
    for next in graph[start]:
        yield from dfs_paths(graph, next, goal, path+[next])
print(list(dfs_paths(graph, 'A', 'F', path)))
