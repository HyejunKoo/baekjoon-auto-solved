def solution(num_list):
    answer = 0
    gob = 1
    hab = 0
    
    for i in range(len(num_list)):
        gob *= num_list[i]
    
    for i in range(len(num_list)):
        hab += num_list[i]
        
    if gob < hab**2:
        answer = 1
    else:
        answer = 0
    
    return answer