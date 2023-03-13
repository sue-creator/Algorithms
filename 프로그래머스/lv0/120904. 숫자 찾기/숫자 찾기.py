def solution(num, k):
    try:
        temp = list(map(int, str(num)))
        return temp.index(k) + 1
    
    except ValueError:
        return -1
    