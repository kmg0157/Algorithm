def solution(todo_list, finished):
    answer = []
    
    for i,n in enumerate(finished):
        if n==False:
            answer.append(todo_list[i])
    return answer