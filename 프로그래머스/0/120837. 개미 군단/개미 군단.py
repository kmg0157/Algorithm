def solution(hp):
    answer = 0
    
    while hp > 0:
        if hp >= 5:
            temp = hp // 5
            answer += temp
            hp -= temp * 5
        elif hp >= 3:
            temp = hp // 3
            answer += temp
            hp -= temp * 3
        else:
            answer += hp
            hp -= hp
    
    return answer
