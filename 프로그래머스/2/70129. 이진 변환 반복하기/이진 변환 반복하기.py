def solution(s):
    answer = []
    zero,count=0,0
    tmp=''
    while s!='1':
        count+=1
        zero += s.count('0')  # '0'의 개수를 세어 누적
        s = s.replace('0', '')  # '0'을 제거한 후
        s = bin(len(s))[2:]  # 남은 문자열의 길이를 이진수로 변환
        
    return [count,zero]