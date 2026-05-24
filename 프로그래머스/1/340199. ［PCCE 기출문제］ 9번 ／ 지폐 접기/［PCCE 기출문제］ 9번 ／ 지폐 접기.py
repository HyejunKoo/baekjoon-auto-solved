def solution(wallet, bill):
    wallet.sort()
    bill.sort()
    
    count = 0
    
    while wallet[0] < bill[0] or wallet[1] < bill[1]:
        bill[1] //= 2
        count += 1
        bill.sort()

   
    return count