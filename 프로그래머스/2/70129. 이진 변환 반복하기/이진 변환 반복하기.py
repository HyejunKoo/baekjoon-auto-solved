def solution(s):
    zero = 0
    count = 0
    
    while(s!="1"):
        one = 0
        for word in s:
            if word == "0":
                zero += 1
            else:
                one += 1
        s = bin(one)[2:]
        count += 1            
            
    return [count, zero]
            
                  