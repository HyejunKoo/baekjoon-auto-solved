def solution(s):
    count = 0
    
    for word in s:
        if word == "(":
            count += 1
        else:
            count -= 1
        if count < 0:
            return False
    if count != 0:
        return False
    else:
        return True
        