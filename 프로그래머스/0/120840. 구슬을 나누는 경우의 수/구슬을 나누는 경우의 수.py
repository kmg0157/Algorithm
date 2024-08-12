def fac(n):
    f=1
    while n>0:
        f*=n
        n-=1
    return f

def solution(balls, share):
    answer = fac(balls)//(fac(balls-share)*fac(share))
    return answer