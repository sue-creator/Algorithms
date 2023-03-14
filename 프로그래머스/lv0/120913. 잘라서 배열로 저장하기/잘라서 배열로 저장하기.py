def solution(my_str, n):
    answer = []
    cnt = 0
    
    for i in range( len(my_str)//n + 1):
        if ( cnt <= len(my_str)//n - 1):
            answer.append(my_str[cnt*n : (cnt*n) + n])
        elif ( cnt == len(my_str)//n) and ( len(my_str)/n != len(my_str)//n ):
            answer.append(my_str[cnt*n::])
        cnt += 1
    
    return answer