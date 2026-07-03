def solution(s):
    
    zero = 0
    count = 0
    
    while(True):
        one = 0
        for i in s:
            if i == "0":
                zero += 1
            else:
                one += 1 # 문자열 안 0, 1 세기 완료
        final = bin(one)[2:] # 이진변환 한 결과
        count += 1

        if final != "1":
            s = final
        else:
            break
    
    answer = [count,zero]
    return answer
            
                  