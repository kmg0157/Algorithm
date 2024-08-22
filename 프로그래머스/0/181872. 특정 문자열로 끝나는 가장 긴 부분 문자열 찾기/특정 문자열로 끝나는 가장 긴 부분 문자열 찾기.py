def solution(myString, pat):
    # pat가 마지막에 등장하는 위치를 찾습니다.
    index = myString.rfind(pat)
    
    # 만약 pat가 발견되지 않으면 빈 문자열을 반환합니다.
    if index == -1:
        return ""
    
    # 발견된 index를 기준으로 가장 긴 부분 문자열을 반환합니다.
    return myString[:index + len(pat)]
