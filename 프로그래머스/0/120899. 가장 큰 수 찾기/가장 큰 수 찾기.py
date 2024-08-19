def solution(array):
    answer = []
    tmp=0
    max_i=0
    
    for idx, num in enumerate(array):
        if num>tmp:
            tmp=num
            max_i=idx
        
    answer.append(tmp)
    answer.append(max_i)
    return answer