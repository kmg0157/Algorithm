def solution(num_list):
    answer = []
    tmp=0
    
    for num in num_list:
        if num%2==0:
            tmp+=1        
    
    answer.append(tmp)
    answer.append(len(num_list)-tmp)
    
    return answer