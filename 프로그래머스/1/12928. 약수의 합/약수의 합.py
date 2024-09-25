def solution(n):
    if n==0:
        return 0
    answer = sum([i for i in range(2,n+1) if n%i==0])+1
    return answer