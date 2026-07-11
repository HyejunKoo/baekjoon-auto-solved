def solution(n):
    mod = 1234567
    prev = 0
    curr = 1
    
    for i in range(2, n+1):
        curr_mod = (prev + curr) % mod
        prev = curr
        curr = curr_mod
    
    return curr        