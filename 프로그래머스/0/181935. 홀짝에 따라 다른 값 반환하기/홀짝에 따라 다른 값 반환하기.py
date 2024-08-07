def solution(n):
    answer = 0
    
    if n%2==1:
        tmp=[i for i in range(n+1) if i%2==1]
        answer=sum(tmp)
    else:
        tmp=[i**2 for i in range(n+1) if i%2==0]
        answer=sum(tmp)
    return answer