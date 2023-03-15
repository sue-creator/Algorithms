def solution(arr1, arr2):
    r = len(arr1)
    c = len(arr1[-1])
    answer = []
    
    for i in range(r):
        tmp = []
        for j in range(c):
            tmp.append(arr1[i][j] + arr2[i][j])
        answer.append(tmp)
    
    return answer