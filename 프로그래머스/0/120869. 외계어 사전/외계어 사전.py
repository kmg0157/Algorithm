def solution(spell, dic):
    # spell의 알파벳을 정렬
    sorted_spell = ''.join(sorted(spell))
    
    # dic에서 각 단어를 정렬한 후 비교
    for word in dic:
        if ''.join(sorted(word)) == sorted_spell:
            return 1
    
    return 2
