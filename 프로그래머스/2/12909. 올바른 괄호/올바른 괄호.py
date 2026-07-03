def solution(s):
    
    count = 0    
    for i in s:
        if i == "(":
            count += 1
        else:
            count -= 1
        if count < 0:
            return False    
    

    if s[0] == ")":
        return False
    elif count != 0:
        return False
    else:
        return True