def solution(angle):
    answer = 0
    
    if angle>0 and angle<90:
        answer=1
    elif angle>90 and angle<180:
        answer=3
    else:
        answer=2 if angle==90 else 4
    
    return answer