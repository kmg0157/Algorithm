def solution(arr, queries):
    answer = []

    for s, e, k in queries:
        sub_arr = arr[s:e + 1]  
        filtered_arr = [num for num in sub_arr if num > k]

        if filtered_arr:
            answer.append(min(filtered_arr))
        else:
            answer.append(-1)

    return answer