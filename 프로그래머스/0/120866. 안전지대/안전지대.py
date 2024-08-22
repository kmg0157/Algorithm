def solution(board):
    answer = 0
    rows,cols=len(board),len(board[0])
    
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1), (-1, -1), (-1, 1), (1, -1), (1, 1)]
    
    danger_map=[[0]*cols for _ in range(rows)]
    
    for i in range(rows):
        for j in range(cols):
            if board[i][j]==1:
                danger_map[i][j]=1
                for dx,dy in directions:
                    ni,nj=i+dx,j+dy
                    if 0<=ni<rows and 0<=nj<cols:
                        danger_map[ni][nj]=1
                
    for i in range(rows):
        for j in range(cols):
            if danger_map[i][j]==0:
                answer+=1
    
    return answer