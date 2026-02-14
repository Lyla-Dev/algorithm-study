def solution(array, n):
    return array.count(n)

# 다른 풀이 - 반복분
def solution2(array, n):
    return sum(1 for num in array if num == n)