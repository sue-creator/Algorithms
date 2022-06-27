from collections import deque

n, m, v = list(map(int, input().split()))
graph = [[]for _ in range(n+1)]
visited_dfs = [[0]for _ in range(n+1)]
visited_bfs = [[0]for _ in range(n+1)]


for _ in range(m):
    a, b = list(map(int, input().split()))
    graph[a].append(b)
    graph[b].append(a)


def dfs(graph, v):
    print(v, end=' ')
    visited_dfs[v] = [1]
    for _ in graph[v]:
        if visited_dfs[_] == [0]:
            dfs(graph, _)


def bfs(graph, start):
    queue = deque()
    queue.append(start)
    visited_bfs[start] = [1]

    while queue:
        start = queue.popleft()
        print(start, end=' ')

        for _ in graph[start]:
            if visited_bfs[_] == [0]:
                queue.append(_)
                visited_bfs[_] = [1]


graph = [sorted(i) for i in graph]

dfs(graph, v)
print()
bfs(graph, v)
