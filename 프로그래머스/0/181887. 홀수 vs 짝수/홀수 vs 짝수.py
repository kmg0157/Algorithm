def solution(num_list):
    answer = 0
    odd=[n for i,n in enumerate(num_list) if i%2==1]
    even=[n for i,n in enumerate(num_list) if i%2==0]
    
    A=sum(odd)
    B=sum(even)
    
    answer=A if A>=B  else B
    
    return answer