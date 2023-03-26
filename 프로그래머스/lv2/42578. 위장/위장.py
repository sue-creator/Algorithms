def solution(clothes):
    answer = 1
    closet = {}
    
    for c in clothes:
        value, key = c[0], c[1]
        
        if key not in closet:
            closet[key] = [value]
        else:
            closet[key].append(value)
    print(closet.keys())
    
    for key in closet.keys():
        answer = answer * (len(closet[key]) + 1)
    
    return answer - 1