def solution(myStr):
    answer = []
    n=['a','b','c']
    tmp=''
    
    for char in myStr:
        if char not in n:
            tmp+=char    
        else:
            if tmp:
                answer.append(tmp)
                tmp=''
            
    if tmp:
        answer.append(tmp)
        tmp=''
        
    if not answer:
        answer.append('EMPTY')
    return answer