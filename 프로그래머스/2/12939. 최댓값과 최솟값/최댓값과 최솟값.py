def solution(s):
    # 문자열을 공백을 기준으로 분리하여 숫자 목록으로 변환
    numbers = list(map(int, s.split()))
    
    # 최소값과 최대값을 구함
    min_num = min(numbers)
    max_num = max(numbers)
    
    # "(최소값) (최대값)" 형태의 문자열로 반환
    return f"{min_num} {max_num}"
