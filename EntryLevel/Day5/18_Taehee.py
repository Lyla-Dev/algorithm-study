def solution(money):
    return [money // 5500 , money % 5500]

print(solution(5500))
print(solution(15000))

# 다른 풀이
# divmod(a, b) => (a//b, a%b) 튜플 반환
def solution2(money):
    return list(divmod(money, 5500))

print(solution2(5500))
print(solution2(15000))