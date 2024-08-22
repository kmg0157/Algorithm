def solution(myString):
    answer, tmp = [], []
    
    for char in myString:
        if char != 'x':
            tmp.append(char)
        else:
            if tmp:  # Check if tmp is not empty
                answer.append(''.join(tmp))  # Join the characters in tmp and append to answer
                tmp = []  # Reset tmp
    
    # If there's any remaining characters in tmp after the loop
    if tmp:
        answer.append(''.join(tmp))
    
    # Sort the list
    answer.sort()
    
    return answer
