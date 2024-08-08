def solution(a, d, included):
    answer = 0
    for i, include in enumerate(included):  # enumerate() 사용
        if include:  # boolean 값 직접 비교
            answer += a + d * i
    return answer