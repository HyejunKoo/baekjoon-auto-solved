def solution(array):
    
    count = {}
    
    for x in array:
        if x in count:
            count[x] += 1
        else:
            count[x] = 1
    
    max_count = max(count.values())
    
    modes = [k for k, v in count.items() if v==max_count]
    
    answer = 0
    
    if len(modes) > 1:
        answer = -1
    else:
        answer = modes[0]
    
    return answer