def solution(s):
    answer = ''
    once=[]
    more=[]
    for i in range(len(s)):
        if s[i] not in once and s[i] not in more:
            once.append(s[i])
        elif s[i] in once and s[i] not in more:
            more.append(s[i])
            
    chk = list(set(once) - set(more))
    chk.sort()
    
    return ''.join(chk)