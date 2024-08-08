def solution(price):
    answer = 0
    
    if price>=500000:
        answer=0.8*price
    elif price>=300000:
        answer=0.9*price
    elif price>=100000:
        answer=0.95*price
    else:
        answer=price
    
    return int(answer)