def solution(arr):
    # 현재 배열의 길이
    n = len(arr)
    
    # 현재 길이보다 크거나 같은 가장 작은 2의 거듭제곱 찾기
    power_of_two = 1
    while power_of_two < n:
        power_of_two *= 2
    
    # 부족한 길이만큼 0을 추가
    while len(arr) < power_of_two:
        arr.append(0)
    
    return arr
