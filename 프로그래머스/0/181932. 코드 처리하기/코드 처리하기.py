def solution(code):
    ret = []
    mode = 0
    
    for idx in range(len(code)):
        char = code[idx]
        
        if char == "1":
            mode = 1 - mode
        else:
            if mode == 0:
                if idx % 2 == 0:
                    ret.append(char)
            elif mode == 1:
                if idx % 2 != 0:
                    ret.append(char)
                    
                    
    answer = "".join(ret)

    return answer if answer else "EMPTY"