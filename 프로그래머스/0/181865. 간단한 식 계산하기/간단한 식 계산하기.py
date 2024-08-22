def solution(binomial):
    answer = 0
    binomial=binomial.split(' ')
    a,op,b=binomial
    
    if op=='+':
        answer=int(a)+int(b)
    elif op=='-':
        answer=int(a)-int(b)
    else:
        answer=int(a)*int(b)
    return answer