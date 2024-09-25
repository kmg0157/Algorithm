
vowels=['a','e','i','o','u']

while True:
    sentence=input()
    if sentence=='#':
        break
    else:
        count=sum(1 for c in sentence.lower() if c in vowels)
        print(count)