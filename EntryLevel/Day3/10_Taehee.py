def solution(array):
    array.sort()

    index = len(array)
    median_index = index // 2

    median_value = array[median_index]
    return median_value

print(solution([1,2,7,10,11]))
print(solution([9,-1,0]))

# sort()와 sorted() 차이
# - list.sort(): 리스트 원본 직접 정렬
# - sorted(list): 원본 건드리지 않고, 정렬된 새로운 리스트 만들어 반환

'''
arr1 = [3, 1, 2]
result = arr1.sort()
print(arr1, result)
# [1, 2, 3] None

arr2 = [3, 1, 2]
result2 = sorted(arr2)
print(arr2, result2)
# [3, 1, 2] [1, 2, 3]
'''

# 다른 풀이 -----------------------------
def solution2(array):
    return sorted(array)[len(array)//2]

print(solution2([1,2,7,10,11]))
print(solution2([9,-1,0]))