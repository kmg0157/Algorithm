def solution(my_string):
    tmp=my_string.lower()
    answer=''.join(sorted(tmp))
    return answer