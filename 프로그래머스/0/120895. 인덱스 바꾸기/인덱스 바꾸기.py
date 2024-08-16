def solution(my_string, num1, num2):
    # 문자열을 리스트로 변환합니다.
    my_list = list(my_string)
    
    # 두 위치의 문자를 교환합니다.
    my_list[num1], my_list[num2] = my_list[num2], my_list[num1]
    
    # 리스트를 다시 문자열로 변환하고 반환합니다.
    return ''.join(my_list)
