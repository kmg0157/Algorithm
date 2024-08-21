def solution(arr):
    x = 0
    while True:
        # 변환 후 결과를 저장할 새로운 배열
        new_arr = []
        
        # 각 원소에 대해 조건에 따라 변환
        for num in arr:
            if num >= 50 and num % 2 == 0:
                new_arr.append(num // 2)
            elif num < 50 and num % 2 == 1:
                new_arr.append(num * 2 + 1)
            else:
                new_arr.append(num)
        
        # 변환된 배열이 이전 배열과 동일하다면 반복을 멈춤
        if new_arr == arr:
            break
        
        # 그렇지 않다면 배열을 업데이트하고 반복을 계속
        arr = new_arr
        x += 1
    
    return x
