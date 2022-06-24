n = int(input())
lines = int(input())
graph = [[]*n for _ in range(n+1)]
visited = [0]*(n+1)

for _ in range(lines):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)


count = 0  # start와 연결된 것을 세는 공간

def bfs(start):
    global count
    visited[start] = 1
    for _ in graph[start]:
        if visited[_] == 0:
            visited[_] = 1
            bfs(_)
            count += 1
        else:
            continue


bfs(1)
print(count)
