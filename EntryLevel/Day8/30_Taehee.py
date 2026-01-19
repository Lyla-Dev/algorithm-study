# 외계행성의 나이
# a는 0, b는 1, ... j는 9

def solution(age):
    result = ''
    codes = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']
    while (age >= 10):
        result += codes[age % 10]
        age //= 10

    result += codes[age % 10]
    return result[::-1]

# 다른 풀이
# age를 str로 형변환해서 처리
def solution2(age):
    age = str(age)
    codes = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']
    result = ''
    for i in age:
        result += codes[int(i)]
    return result

# 다른 풀이 - 매핑 테이블
def solution3(age):
    table = "abcdefghij"
    return "".join([table[int(i)] for i in str(age)])

# 다른 풀이 - ASCII 코드 활용
# a : 97
def solution4(age):
    return "".join([chr(int(i) + 97) for i in str(age)])
