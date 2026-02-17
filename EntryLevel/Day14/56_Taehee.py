def solution(my_string):
    answer = ''
    for c in my_string:
        if c.isupper():
            answer += c.lower()
        else:
            answer += c.upper()

    return answer

print(solution("ccCC"))

# 다른 풀이 - 이런 내장 함수가 있었다니?!!!!
def solution2(my_string):
    return my_string.swapcase()