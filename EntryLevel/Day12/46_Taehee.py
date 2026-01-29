def solution(my_string):
    answer = []
    for c in my_string:
        if c in "0123456789":
            answer.append(int(c))
    return sorted(answer)

# 다른 풀이
# 1. 아스키 코드 사용
def solution2(my_string):
    answer = []
    for c in my_string:
        if '0' <= c <= '9':
            answer.append(int(c))

    return sorted(answer)

# 2. isdigit() 함수 사용
def solution3(my_string):
    answer = []
    for c in my_string:
        if c.isdigit():
            answer.append(int(c))

    return sorted(answer)

# 3. 리스트 컴프리헨션
def solution4(my_string):
    return sorted([int(c) for c in my_string if c.isdigit()])
