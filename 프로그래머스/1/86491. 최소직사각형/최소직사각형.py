def solution(sizes):
    answer = 0
    rows=[]
    cols=[]
    
    for size in sizes:
        max_s,min_s=max(size),min(size)
        rows.append(max_s)    
        cols.append(min_s)

    answer=max(rows)*max(cols)
    
    return answer