def solution(babbling):
    answer = 0
    words=["aya", "ye", "woo", "ma"]
    
    for babble in babbling:
        for word in words:
            if word in babble:
                babble=babble.replace(word,' ')
    
        babble=babble.replace(' ','')
        if babble=='':
            answer+=1
    
    
    return answer