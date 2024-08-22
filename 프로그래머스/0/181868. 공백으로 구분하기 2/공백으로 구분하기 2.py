def solution(my_string):
    answer=[]
    tmp = my_string.split(' ')
    for char in tmp:
        if char!='':
            answer.append(char)
    return answer