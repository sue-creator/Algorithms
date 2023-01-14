def solution(emergency):
    answer =[]
    emer2 = emergency[:]
    emer2 = sorted(emer2, reverse=True)
    emerpairs = {}
    for i in range(len(emer2)):
        emerpairs[emer2[i]] = i+1       
    for _ in emergency:
        answer.append(emerpairs[_])
    
    return answer