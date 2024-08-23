def solution(strArr):
    answer = 0
    counter = {}
    
    # 각 문자열의 길이를 카운트
    for arr in strArr:
        length = len(arr)
        if length not in counter:
            counter[length] = 0
        counter[length] += 1
    
    # 가장 많은 문자열 길이의 개수 찾기
    answer = max(counter.values())
    
    return answer
