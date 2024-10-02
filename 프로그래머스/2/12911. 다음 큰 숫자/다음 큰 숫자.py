def solution(n):
    answer = 0
    a=bin(n)[2:]
    count=a.count('1')
    b=n+1
    while True:
        if count==bin(b).count('1'):
            answer=b
            break
        else:
            b+=1
    
    return answer