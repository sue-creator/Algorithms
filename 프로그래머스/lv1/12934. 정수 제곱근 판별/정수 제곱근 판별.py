import math

def solution(n):
    if int(math.sqrt(n)) == math.sqrt(n):
        return (math.sqrt(n) + 1) * (math.sqrt(n) + 1)
    else:
        return -1
