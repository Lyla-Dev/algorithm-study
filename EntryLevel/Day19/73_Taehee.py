def solution(array):
    answer = 0
    for num in array:
        answer += str(num).count('7')
    return answer

# 다른 풀이
#"[7, 77, 17]"이라는 하나의 거대한 문자열로 변환 후 7의 개수 세는 방법
def solution2(array):
    return str(array).count('7')
