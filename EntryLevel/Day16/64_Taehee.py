def solution(s1, s2):
    answer = 0
    for word in s1:
        if word in s2:
            answer += 1
    return answer

# 다른 풀이 - 교집합
def solution2(s1, s2):
    return len(set(s1) & set(s2))