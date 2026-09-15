def solution(k, tangerine):
    #먼저 크기별 개수 저장
    #개수 큰 순서대로 정렬
    #전체 개수에 맞춰 넘으면 자르기 - 서로 다른 종류의 수 저장
    
    d = {}
    for x in tangerine:
        d[x] = d.get(x,0)+1
    
    counts = sorted(d.values(), reverse = True)
    
    total = 0
    answer = 0
    
    for x in counts:
        total += x
        answer += 1
        
        if total >= k:
            break
        
    return answer
        