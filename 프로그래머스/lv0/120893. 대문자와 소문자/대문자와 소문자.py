def solution(my_string):
    answer = ''
    for i in range(len(my_string)):
        if not my_string[i].isupper():
            answer += my_string[i].upper()
        else:
            answer += my_string[i].lower()
    return answer