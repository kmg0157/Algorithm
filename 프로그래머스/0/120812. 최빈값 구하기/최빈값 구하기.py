def solution(array):
    from collections import Counter
    
    counter=Counter(array)
    
    max_count=max(counter.values())
    answer=[key for key,count in counter.items() if count==max_count]
    
    if len(answer)>1:
        answer=-1
    else:
        answer=answer[0]
    return answer