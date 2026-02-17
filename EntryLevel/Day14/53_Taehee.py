def solution(array, n):
    array.sort()

    diff = []
    for e in array:
        diff.append(abs(e-n))

    return array[diff.index(min(diff))]


# 다른 풀이
def solution2(array, n):
    array.sort()

    # 'n과의 차이'를 기준으로 다시 정렬
    # 파이썬의 정렬은 'Stabel Sort'라서, 차이가 같으면 앞의 순서(작은 수)가 유지됨
    array.sort(key=lambda x: abs(x-n))

    # 가장 앞에 있는 값이 정답
    return array[0]
