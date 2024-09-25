def solution(s):
    answer = ''
    first_num=True
    
    for c in s:
        if c==' ':
            answer+=c
            first_num=True
        elif first_num:
            answer+=c.upper()
            first_num=False
        else:
            answer+=c.lower()
    return answer