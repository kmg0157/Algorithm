def solution(n, m, section):
    answer = 0
    # 현재 페인트칠을 한 위치를 추적하는 변수
    current_position = 0
    
    for s in section:
        # 페인트칠이 필요할 경우
        if s > current_position:
            answer += 1  # 페인트칠 횟수를 증가
            current_position = s + m - 1  # m만큼 페인트칠을 해서 현재 위치를 갱신
    
    return answer
