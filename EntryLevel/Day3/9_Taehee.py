def solution(num1, num2):
    return num1 % num2

print(solution(3,2))
print(solution(10,5))

# 다른 풀이 - 뺄셈으로 접근
def solution2(num1, num2):
    while num1 >= num2:
        num1 -= num2
    return num1