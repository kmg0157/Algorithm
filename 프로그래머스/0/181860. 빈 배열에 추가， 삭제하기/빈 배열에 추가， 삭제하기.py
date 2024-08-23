def solution(arr, flag):
    answer = []
    
    for num,f in zip(arr,flag):
        if f==True:
            for i in range(num*2):
                answer.append(num)
        else:
            for i in range(num):
                answer.pop()
    
    return answer