def solution(numlist, n):
    # 정렬 기준:
    # 1. n과의 거리(절대값)를 기준으로 오름차순 정렬
    # 2. 거리가 같을 경우 숫자 자체를 내림차순으로 정렬
    return sorted(numlist, key=lambda x: (abs(x - n), -x))
