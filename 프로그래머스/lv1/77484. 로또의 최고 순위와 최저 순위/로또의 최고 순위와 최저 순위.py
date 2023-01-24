def solution(lottos, win_nums):   
    W = set(win_nums)
    mine = set(lottos)
    common = len(W & mine)
    
    zeros = 0
    for _ in range(6):
        if lottos[_] == 0:
            zeros += 1
    
    rank_min = 7-common-zeros
    rank_max = 7-common

    if rank_min > 6:
        rank_min = 6
    if rank_min < 1:
        rank_min = 1
    if rank_max > 6:
        rank_max = 6
    if rank_max < 1:
        rank_max = 1
        
    if common == 0 and zeros == 0:
        rank_max, rank_min = 6, 6
    return [rank_min, rank_max]