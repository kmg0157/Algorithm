from collections import Counter

def solution(s):
    answer = ''
    tmp=[]
    counter=Counter(s)
    
    for k,v in counter.items():
        if v==1:
            tmp.append(k)
            
    tmp.sort()
    answer=''.join(tmp)
    return answer