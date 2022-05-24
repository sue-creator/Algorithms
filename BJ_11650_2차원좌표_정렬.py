N = int(input())
numbers = []

for _ in range(N):
    a, b = map(int, input().split())
    numbers.append([a, b])
    print(numbers)

numbers.sort()

for i in range(N):
        print(numbers[i][0], numbers[i][1])
