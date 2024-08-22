def solution(myString):
    answer,tmp = [],''
    
    for char in myString:
        if char!='x':
            tmp+=char
        else:
            if len(tmp)!=0:
                answer.append(len(tmp))
                tmp=''
            else:
                answer.append(0)
    
    if len(tmp)!=0:
        answer.append(len(tmp))
    else:
        answer.append(0)
    return answer