def solution(n_str):
    answer = ''
    
    for i, char in enumerate(n_str):
        if char!='0':
            answer=n_str[i:]
            break
    
    return answer