def solution(arr, query):
    for i in range(len(query)):
        if i % 2 == 0:
            # 짝수 인덱스: query[i] 이후 배열을 잘라냄
            arr = arr[:query[i] + 1]
        else:
            # 홀수 인덱스: query[i] 이전 배열을 잘라냄
            arr = arr[query[i]:]
    
    return arr
