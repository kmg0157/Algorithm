def solution(intStrs, k, s, l):
    answer = []
    
    for string in intStrs:
        tmp = string[s:s+l]  # 문자열의 s 위치에서 l 길이만큼 잘라냄
        if int(tmp) > k:  # 잘라낸 부분이 k보다 크면
            answer.append(int(tmp))  # 리스트에 추가
    
    return answer
