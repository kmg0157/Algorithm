def solution(numLog):
    answer = ''

    tmp = {1: 'w', -1: 's', 10: 'd', -10: 'a'}

    for i in range(1, len(numLog)):
        diff = numLog[i] - numLog[i - 1]
        if diff in tmp:
            answer += tmp[diff]

    return answer