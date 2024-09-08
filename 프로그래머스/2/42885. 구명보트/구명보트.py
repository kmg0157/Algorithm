def solution(people, limit):
    answer = 0
    people.sort()  # 사람들의 무게를 오름차순으로 정렬
    
    # 투 포인터 방식
    light = 0  # 가장 가벼운 사람을 가리키는 포인터
    heavy = len(people) - 1  # 가장 무거운 사람을 가리키는 포인터
    
    while light <= heavy:
        if people[light] + people[heavy] <= limit:
            # 가장 가벼운 사람과 가장 무거운 사람이 함께 탈 수 있다면
            light += 1  # 가벼운 사람 포인터 이동
        # 무거운 사람은 항상 배에 태움 (혼자 탈 수도 있음)
        heavy -= 1
        answer += 1  # 보트 한 대 사용
    
    return answer
