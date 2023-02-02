def solution(my_string):
    answer = ''
    rmv = ['a','i','e','o','u']
    for i in range(len(my_string)):
        if my_string[i] not in rmv:
            answer += my_string[i]
    return answer