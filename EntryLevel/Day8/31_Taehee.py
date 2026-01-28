# 진료 순서 정하기
# 응급도가 높은 순서대로 진료 순서 정한 배열 Return

def solution(emergency):
    result = []
    sorted_list = sorted(emergency, reverse=True)

    for i in emergency:
        result.append(sorted_list.index(i)+1)

    return result

# 이걸 한 줄로 줄이면..
def solution2(emergency):
    return [sorted(emergency, reverse=True).index(e)+1 for e in emergency]