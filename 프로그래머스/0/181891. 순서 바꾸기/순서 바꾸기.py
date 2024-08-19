def solution(num_list, n):
    answer = []
    tmp1=num_list[n:]
    tmp2=num_list[:n]
    answer=tmp1+tmp2
    return answer