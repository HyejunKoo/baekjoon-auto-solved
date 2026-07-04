def solution(s):
    
    words = s.split(" ")
    answer = []
    
    for word in words:
        if word == "":
            answer.append("")
        else:
            answer.append(word[0].upper()+word[1:].lower())
    
    return " ".join(answer)
    
            
        