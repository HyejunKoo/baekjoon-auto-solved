def solution(n):
    
    a = n
    s = bin(n)[2:]
    count_a = 0
    
    for i in s:
        if i == '1':
            count_a += 1
            
    while (True):
        a += 1
        t = bin(a)[2:]
        count_t = 0
        for i in t:
            if i == '1':
                count_t += 1
        if count_a == count_t:
            return a
            break
        
            