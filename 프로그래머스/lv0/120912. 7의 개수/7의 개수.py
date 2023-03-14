def solution(array):
    answer = 0
    
    for i in array:
        temp = list(map(int, str(i)))
        for j in temp:
            if (j == 7):
                answer += 1
    
    return answer