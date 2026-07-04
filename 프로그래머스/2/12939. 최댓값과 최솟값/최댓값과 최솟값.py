def solution(s):
    words = s.split(" ")
    words.sort(key=int) #작은거부터 정렬하기       
    return words[0]+" "+words[-1]