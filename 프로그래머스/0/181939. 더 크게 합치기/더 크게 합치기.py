def solution(a, b):
    answer = 0
    
    ans1=str(a)+str(b)
    ans2=str(b)+str(a)
    answer=max(int(ans1),int(ans2))
    
    return answer