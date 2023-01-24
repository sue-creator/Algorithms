def solution(sizes):
    sizes.sort()
    for i in range(len(sizes)):
        sizes[i].sort()
    
    max_x, max_y = set([1]), set([1])
    
    for i in list(range(1, len(sizes))):
        max_x.add(max(sizes[i-1][0], sizes[i][0]))
        max_y.add(max(sizes[i-1][1], sizes[i][1]))
    max_x = max(max_x)
    max_y = max(max_y)

    return max_x * max_y