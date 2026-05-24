def solution(schedules, timelogs, startday):
    
    answer = 0
    
    def limit_time(time):
        hour = time // 100
        minute = time % 100
        
        minute += 10
        if minute >= 60:
            hour += 1
            minute -= 60
        
        return hour * 100 + minute
    
    good = 0
    
    for i in range(len(schedules)):
        count = 0
        for j in range(7):
            day = (startday + j - 1) % 7 +1
        
            if day == 6 or day == 7:
                continue
            else:
                if limit_time(schedules[i]) < timelogs[i][j]:
                    count+=1
        if count < 1:
            good += 1
    
            
    answer = good
    return answer