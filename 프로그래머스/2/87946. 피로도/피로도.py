def solution(k, dungeons):
    
    visited = [False] * len(dungeons)
    
    answer = 0
    
    def dfs(p, count):
        
        nonlocal answer
        
        answer = max(count, answer)
        
        for i in range(len(dungeons)):
            need = dungeons[i][0]
            cost = dungeons[i][1]
        
            if not p < need and not visited[i]:
                visited[i] = True
            
                dfs(p-cost, count + 1)
            
                visited[i] = False
    
    dfs(k,0)
    return answer