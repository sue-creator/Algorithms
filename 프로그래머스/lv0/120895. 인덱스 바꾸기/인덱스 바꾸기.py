def solution(my_string, num1, num2):
    answer = list(map(str, my_string))

    a = str(my_string[num1])
    b = str(my_string[num2])

    answer[num1] = str(b)
    answer[num2] = str(a)
        
    return ''.join(answer)