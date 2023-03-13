def chck(chck_before, chck_after):
    chck_len = len(chck_after)
    cnt = 0
    
    for i in chck_before:
        try:
            if chck_before[i] == chck_after[i]:
                cnt += 1
        except:
            continue
            
    if chck_len == cnt:
        return 1
    else:
        return 0
    

def solution(before, after):
    chck_before = {}; chck_after = {}
    before = list(map(str, before))
    after = list(map(str, after))

    if len(before) != len(after):
        return 0
    
    for i in before:
        if i not in chck_before:
            chck_before[i] = 1
        else:
            chck_before[i] +=1
            
    for i in after:
        if i not in chck_after:
            chck_after[i] = 1
        else:
            chck_after[i] +=1
            
    return chck(chck_before, chck_after)
