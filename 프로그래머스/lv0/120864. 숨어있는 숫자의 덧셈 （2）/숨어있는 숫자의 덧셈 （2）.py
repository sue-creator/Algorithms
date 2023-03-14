from re import findall

def solution(my_string):
    answer = 0
    
    my_string = findall(r'[0-9]+', my_string)
    #print(my_string)
    
    for i in my_string:
        answer += int(i)
    
    return answer