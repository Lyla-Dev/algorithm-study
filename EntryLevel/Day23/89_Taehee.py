def solution(numlist, n):
    def get_priority(x):
        # 1순위: n과의 거리가 작은 순서
        distance = abs(x - n)

        # 2순위: 거리가 같다면, 숫자가 작은 순서(-x) => 원래 숫자가 큰 순서
        value = -x
        return (distance, value)
    
    return sorted(numlist, key=get_priority)

# 다른 풀이 - 람다 함수
def solution2(numlist, n):
    return sorted(numlist, key=lambda x: (abs(x - n), -x))