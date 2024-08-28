def solution(i, j, k):
    answer = 0
    
    for num in range(i,j+1):
        n_str=str(num)
        for char in n_str:
            if char==str(k):
                answer+=1
    
    return answer