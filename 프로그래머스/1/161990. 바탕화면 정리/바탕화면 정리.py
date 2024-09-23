def solution(wallpaper):
    answer = []
    
    x_c,y_c=[],[]
    w,h=len(wallpaper),len(wallpaper[0])
    
    for i in range(w):
        for j in range(h):
            if wallpaper[i][j]=='#':
                x_c.append(i)
                y_c.append(j)
    
    
    answer=[min(x_c),min(y_c),max(x_c)+1,max(y_c)+1]
    
    return answer