def solution(s):
    words = s.split(" ") #words라는 배열에 각 문자 ,로 구분돼 들어가있음
    
    answer = []
    
    for word in words:
        if word == "":
            answer.append("")
        else:
            answer.append(word[0].upper()+word[1:].lower())
        
    return " ".join(answer)
            
        