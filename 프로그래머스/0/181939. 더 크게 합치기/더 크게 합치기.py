def solution(a, b):
    answer = 0
    
    sum1=str(a)+str(b)
    sum2=str(b)+str(a)
    
    answer=int(sum1) if int(sum1)>int(sum2) else int(sum2)
    
    return answer