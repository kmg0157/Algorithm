def solution(myString, pat):
    answer = 0
    n=len(pat)
    
    for i in range(0,len(myString)-n+1):
        if pat in myString[i:i+n]:
            answer+=1
    
    return answer