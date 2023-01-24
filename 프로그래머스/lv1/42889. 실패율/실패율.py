def solution(N, stages):
    users = []
    answer = []
    total_users = len(stages)
    
    for _ in range(1, N+1):
        count = stages.count(_)
        
        if total_users == 0:
            fail = 0
        else:
            fail = count / total_users
            
        total_users -= count
        answer.append((fail, _))
        
    answer = sorted(answer, key = lambda x : (x[0], -x[1]), reverse = True)
    
    answer = [i[1] for i in answer]
        
    return answer