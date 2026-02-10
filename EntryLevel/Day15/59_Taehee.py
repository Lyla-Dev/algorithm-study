def solution(s):
    answer = []

    for char in set(s):
        if s.count(char)==1:
            answer.append(char)

    return ''.join(sorted(answer))

# 리스트 컴프리헨션
def solution2(s):
    return ''.join(sorted([char for char in set(s) if s.count(char)==1]))

# 다른 풀이
def solution3(s):
    answer =''
    for c in 'abcdefghijklmnopqrstuvwxyz':
        if s.count(c) == 1:
            answer += c
    return answer

# count()는 리스트나 문자열을 처음부터 끝까지 훑으면서 세는 함수 - O(N)
# 한 번에 다 세고 싶다면? Counter 사용
from collections import Counter
data = [1, 2, 3, 1, 2, 3, 2, 2]
counter = Counter(data)
print(counter)
# Counter({2: 3, 1: 2, 3: 2})

# 특정 문자 하나만 찾을 때는 count()로