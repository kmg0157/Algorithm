def solution(lines):
    answer = 0
    count=[0]*201
    
    for line in lines:
        s,e=line
        for i in range(s+100,e+100):
            count[i]+=1
    
    
    for c in count:
        if c>=2:
            answer+=1
    
    return answer