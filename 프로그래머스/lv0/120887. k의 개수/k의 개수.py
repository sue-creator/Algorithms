def solution(i, j, k):
    cnt = 0
    
    for a in range(i, j+1):
        dis1 = list(map(int, str(a)))
        
        if k in dis1:
            for b in dis1:
                if (b == k):
                    cnt += 1
        else:
            continue
            
        
    return cnt