from collections import Counter

def solution(before, after):
    return 1 if Counter(before) == Counter(after) else 0

# Counter: 문자열 안의 알파벳 개수를 딕셔너리 형태로 세어줌
# 예) Counter("olleh") -> {'l': 2, 'o': 1, 'e': 1, 'h': 1}