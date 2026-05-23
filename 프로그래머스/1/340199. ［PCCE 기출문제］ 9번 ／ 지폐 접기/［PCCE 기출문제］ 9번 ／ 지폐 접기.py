def solution(wallet, bill):
    
    count = 0
    
    wallet.sort()
    
    while True:
        bill.sort()
        
        if bill[0] <= wallet[0] and bill[1] <= wallet[1]:
            break
            
        bill[1]//=2
        
        count+=1
    

    return count