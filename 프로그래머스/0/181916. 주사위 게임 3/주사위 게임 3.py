def solution(a, b, c, d):
    # 주사위 숫자를 정렬
    dice = sorted([a, b, c, d])
    
    # 1. 네 주사위 숫자가 모두 같은 경우
    if dice[0] == dice[3]:
        return 1111 * dice[0]
    
    # 2. 세 주사위 숫자가 같고 하나가 다른 경우
    elif dice[0] == dice[2] or dice[1] == dice[3]:
        p = dice[1]  # 세 번 나온 숫자
        q = dice[3] if dice[0] == dice[2] else dice[0]  # 한 번 나온 숫자
        return (10 * p + q) ** 2
    
    # 3. 두 쌍씩 같은 숫자가 나온 경우
    elif dice[0] == dice[1] and dice[2] == dice[3]:
        p = dice[0]
        q = dice[2]
        return (p + q) * abs(p - q)
    
    # 4. 두 개의 주사위 숫자가 같고 나머지 두 개는 각각 다른 숫자인 경우
    elif dice[0] == dice[1] or dice[1] == dice[2] or dice[2] == dice[3]:
        if dice[0] == dice[1]:
            r = dice[2]
            q = dice[3]
        elif dice[1] == dice[2]:
            r = dice[0]
            q = dice[3]
        else:
            r = dice[0]
            q = dice[1]
        return q * r
    
    # 5. 네 주사위 숫자가 모두 다른 경우
    else:
        return dice[0]
