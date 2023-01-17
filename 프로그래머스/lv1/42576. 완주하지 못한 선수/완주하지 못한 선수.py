def solution(participant, completion):
    cnt = {}
    
    for i in participant:
        if i in cnt:
            cnt[i] += 1
        else:
            cnt[i] = 1
    for i in completion:
        if i in cnt:
            cnt[i] -= 1
            if cnt[i] == 0:
                cnt.pop(i)
            
    return str(list(cnt.keys())[-1])