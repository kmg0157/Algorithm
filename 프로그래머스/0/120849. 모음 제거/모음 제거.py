def solution(my_string):
    answer = ''
    tmp=['a','e','i','o','u']
    
    for char in my_string:
        if char not in tmp:
            answer+=char
    
    return answer