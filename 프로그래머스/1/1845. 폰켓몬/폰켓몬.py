def solution(nums):
    answer = 0
    mod=len(nums)//2
    
    tmp=list(set(nums))
    
    if len(tmp)>=mod:
        answer=mod
    else:
        answer=len(tmp)
    
    return answer