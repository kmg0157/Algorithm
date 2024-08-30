def solution(date1, date2):
    # date1과 date2를 비교하여 date1이 더 이른 날짜인 경우 1을 반환
    if date1[0] < date2[0]:  # year 비교
        return 1
    elif date1[0] == date2[0]:
        if date1[1] < date2[1]:  # month 비교
            return 1
        elif date1[1] == date2[1]:
            if date1[2] < date2[2]:  # day 비교
                return 1
    # date1이 date2보다 더 늦거나 같은 경우 0을 반환
    return 0
