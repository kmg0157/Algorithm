def solution(numbers):
    answer = 0
    tmp=sorted(numbers,reverse=True)
    answer=tmp[0]*tmp[1]
    return answer