def solution(cipher, code):
    answer = ''
    
    # `code`의 배수 인덱스에 해당하는 문자 추출
    for i in range(code - 1, len(cipher), code):
        answer += cipher[i]
    
    return answer
