def solution(array):
    count_dict = {}
    
    for num in array:
        if num not in count_dict:
            count_dict[num] = 1
        else:
            count_dict[num] += 1
        # count_dict[num] = count_dict.get(num, 0) + 1

    max_frequency = max(count_dict.values())
    arr_freq = []

    for key, value in count_dict.items():
        if value == max_frequency:
            arr_freq.append(key)

    if len(arr_freq) > 1:
        return -1
    else:
        return arr_freq[0]
    
print(solution([1,2,3,3,3,4]))
print(solution([1,1,2,2]))
print(solution([1]))

# 딕셔너리 get() 함수 사용하기
# if-else 문 한 줄로 줄일 수 있음 (line 4-8)
# dict.get(key, 기본값) -> key가 없으면 기본값(0)을 가져옴
'''
for num in array:
    count_dict[num] = count_dict[num].get(num, 0) + 1
'''
