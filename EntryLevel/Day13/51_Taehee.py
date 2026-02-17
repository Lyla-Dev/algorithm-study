def solution(my_string):
    answer = ''
    for char in my_string:
        if char not in answer:
            answer += char
    return answer

# 다른 풀이
def solution2(my_string):
    # 딕셔너리 키로 만들어서 자동으로 중복 제거 + 순서 유지
    return ''.join(dict.fromkeys(my_string))

