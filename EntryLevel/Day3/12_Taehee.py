def solution(n):
    results = []
    i = 0
    while i <= n:
        if i % 2 == 1:
            results.append(i)
        i += 1
    return results

print(solution(10))       
print(solution(15))

# range(시작, 끝, 보폭)
'''
for i in range(1, n+1, 2):
    results.append(i)
'''

# 다른 풀이: 리스트 컴프리헨션
def solution2(n):
    return [i for i in range(1, n+1, 2)]

print(solution2(10))       
print(solution2(15))

# 다른 풀이: list()로 바로 변환
def solution3(n):
    return list(range(1, n+1, 2))

print(solution3(10))       
print(solution3(15))