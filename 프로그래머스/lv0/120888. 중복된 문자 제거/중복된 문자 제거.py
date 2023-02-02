def solution(my_string):
    answer = ''
    note=[]
    
    for i in range(len(my_string)):
        if my_string[i] not in note:
            answer += my_string[i]
            note.append(my_string[i])
    return answer