N = int(input())
numbers = []

for a in range(N):
    numbers.append(int(input()))

for i in range(N):
    for j in range(N):
        if numbers[i] < numbers[j]:
            numbers[i], numbers[j] = numbers[j], numbers[i]

for k in range(N):
    print(numbers[k])
