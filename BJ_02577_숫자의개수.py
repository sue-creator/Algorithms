a = int(input())
b = int(input())
c = int(input())

#a, b, c = list(map(int, input().split()))
prod = a * b * c

#cnt = [] 안됨
#cnt = [0]*10 안됨
cnt = [0 for j in range(10)]

for _ in str(prod):
    for i in range(10):
        if _ == str(i):
            cnt[int(_)] = cnt[int(_)] + 1

for _ in cnt:
    print(int(_))
