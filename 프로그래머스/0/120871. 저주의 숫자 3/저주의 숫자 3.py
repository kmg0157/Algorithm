def solution(n):
    answer,count = 0,0
    
    while count < n:
        answer += 1
        if answer % 3 != 0 and '3' not in str(answer):
            count += 1

    return answer