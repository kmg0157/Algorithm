def solution(myString, pat):
    answer = 0
    tmp=''
    
    for char in myString:
        if char=='A':
            tmp+='B'
        else:
            tmp+='A'
        
    answer=1 if pat in tmp else 0
    return answer