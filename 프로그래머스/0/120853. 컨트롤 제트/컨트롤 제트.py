def solution(s):
    answer = 0
    tmp=s.split()
    stack=[]
    
    for char in tmp:
        if char=='Z':
            if stack:
                stack.pop()
        else:
            stack.append(int(char))
            
    answer=sum(stack)
    return answer