def solution(arr, n):
    answer = []
    
    if len(arr)%2==1:
        for i,num in enumerate(arr):
            if i%2==0:
                answer.append(num+n)
            else:
                answer.append(num)
    else:
        for i,num in enumerate(arr):
            if i%2==1:
                answer.append(num+n)
            else:
                answer.append(num)
                
    
    return answer