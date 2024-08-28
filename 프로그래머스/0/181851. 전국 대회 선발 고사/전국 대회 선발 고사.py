def solution(rank, attendance):
    answer = 0
    
    student=[[rank[i],i] for i in range(len(rank)) if attendance[i]==True]
    
    student.sort()
    a=student[0][1]
    b=student[1][1]
    c=student[2][1]
    
    answer=10000*a+100*b+c
    
    return answer