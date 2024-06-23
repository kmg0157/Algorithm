def solution(s):
    answer = 0
    
    while s:
        x=s[0]
        count_x=0
        count_not_x=0
        
        for i in range(len(s)):
            if s[i]==x:
                count_x+=1
            else:
                count_not_x+=1
            if count_x==count_not_x:
                break
        
        answer+=1
        s=s[i+1:]
    
    
    return answer