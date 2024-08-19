def solution(str_list):
    answer = []
    
    for char in str_list:
        if char=='l':
            answer=str_list[:str_list.index('l')]
            break
        elif char=='r':
            answer=str_list[str_list.index('r')+1:]
            break
    
    return answer