def solution(num, total):
    mid_value = total // num
    left_offset = (num - 1) // 2
    start_num = mid_value - left_offset

    return [start_num + i for i in range(num)]