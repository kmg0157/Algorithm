def solution(strArr):
    answer = []
    
    for idx, string in enumerate(strArr):
        if idx%2==1:
            answer.append(string.upper())
        else:
            answer.append(string.lower())
    return answer