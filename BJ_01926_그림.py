from collections import deque

dx = [-1, 1, 0, 0]
dy = [0, 0,  -1, 1]

area = [0]


def bfs(x, y):
    s = 1
    q = deque()
    q.append((x, y))
    graph[x][y] = 0

    while q:
        x, y = q.popleft()

        for _ in range(4):
            nx = x + dx[_]
            ny = y + dy[_]

            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                continue
            else:
                if graph[nx][ny] == 1:
                    graph[nx][ny] = 0
                    q.append((nx, ny))
                    s += 1

    area.append(int(s))
    return


n, m = map(int, input().split())
graph = []

for i in range(n):
    graph.append(list(map(int, input().split())))

for i in range(n):
    for j in range(m):
        if graph[i][j] == 1:
            bfs(i, j)

print(len(area)-1)
print(max(area))
