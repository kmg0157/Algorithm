def solution(n):
    # n x n 크기의 2차원 배열을 0으로 초기화
    answer = [[0] * n for _ in range(n)]
    
    # 대각선 요소에 1을 할당
    for i in range(n):
        answer[i][i] = 1
    
    return answer
