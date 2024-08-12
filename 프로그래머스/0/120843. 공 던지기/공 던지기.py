def solution(numbers, k):
    # k번째 공을 던질 사람의 인덱스 계산
    index = (k - 1) * 2 % len(numbers)
    return numbers[index]
