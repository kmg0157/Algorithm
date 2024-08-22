def solution(my_string):
    answer = 0
    tmp = ''
    
    for char in my_string:
        if char.isdigit():
            tmp += char
        else:
            if tmp != '':
                answer += int(tmp)
                tmp = ''  # Reset tmp after converting to an integer and adding it to answer

    # If there's any remaining number in tmp, add it to answer
    if tmp != '':
        answer += int(tmp)
    
    return answer
