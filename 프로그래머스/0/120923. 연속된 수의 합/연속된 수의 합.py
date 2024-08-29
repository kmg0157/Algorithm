def solution(num, total):
    x=(total-num*(num-1)//2)//num
    answer = [x+i for i in range(num)]
    
    return answer