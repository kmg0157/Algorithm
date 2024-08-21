def solution(myString, pat):
    tmp1=myString.lower()
    tmp2=pat.lower()
    
    if tmp2 in tmp1:
        answer=1
    else:
        answer=0
    
    return answer