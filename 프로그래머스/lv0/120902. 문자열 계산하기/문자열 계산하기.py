def solution(my_string):
    my_string =  my_string.split(' ')

    answer = int(my_string[0])
    
    for i in range(1, len(my_string)-1):
        if (i%2 == 1) and my_string[i] == "+":
            answer += int(my_string[i+1])
        elif (i%2 == 1) and my_string[i] == "-":
            answer -= int(my_string[i+1])

    return answer