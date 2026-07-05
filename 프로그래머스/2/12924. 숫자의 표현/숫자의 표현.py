def solution(n):
    count = 0
    
    for i in range(n):
        sum = 0
        while (sum<=n):
            sum += i+1
            i+=1
            if sum == n:
                count += 1
    
    return count