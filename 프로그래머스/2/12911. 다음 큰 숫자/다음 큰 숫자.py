def solution(n):
    a=0
    new=n+1
    
    while(True):
        bin_new = bin(new)[2:]
        bin_n = bin(n)[2:]
        count_new = 0
        count_n = 0
        for i in bin_new:
            if i == '1':
                count_new += 1
        for i in bin_n:
            if i == '1':
                count_n += 1
        if count_new == count_n:
            return new
        else:
            new += 1
    
            