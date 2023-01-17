def solution(s):
    v = list(map(int, s.split()))
    v = sorted(v)
    print(v)
    answer = ''
    answer += str(v[0])+" "
    answer += str(v[-1])
    return answer