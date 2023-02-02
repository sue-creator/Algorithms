def solution(s):
    sli = s.split()
    ans = 0
    while sli:
        if (sli[-1] != 'Z'):
            ans += int(sli.pop())
        else:
            sli.pop()
            sli.pop()
    
    return ans