n = int(input())  # 입력 받을 줄의 개수
sentence = []     # 입력 받은 문장을 저장할 리스트

# 입력을 리스트에 저장
for _ in range(n):
    sentence.append(input())  # sentence 리스트에 입력 받은 문장 추가

# 첫 번째 문장을 기준으로 답안을 초기화
answer = list(sentence[0])  # 문자열을 리스트로 변환

# 나머지 문장들과 비교하여 패턴을 만듬
for i in range(1, n):  # 두 번째 문장부터 비교
    for j in range(len(sentence[0])):  # 각 문자의 위치를 비교
        if answer[j] != sentence[i][j]:
            answer[j] = '?'  # 다른 문자가 있으면 해당 자리를 '?'로 변경

# 리스트를 문자열로 변환하여 출력
print(''.join(answer))
