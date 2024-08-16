def solution(my_string):
    # 길이 52의 정수 배열을 생성 (0으로 초기화)
    count = [0] * 52
    
    # 문자열을 순회하며 알파벳의 개수를 센다
    for char in my_string:
        if 'A' <= char <= 'Z':  # 대문자 처리
            count[ord(char) - ord('A')] += 1
        elif 'a' <= char <= 'z':  # 소문자 처리
            count[ord(char) - ord('a') + 26] += 1
    
    return count
