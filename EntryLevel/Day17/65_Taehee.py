def solution(num, k):
    str_num = str(num)
    str_k = str(k)

    if str_k in str_num:
        return str_num.index(str_k) + 1
    else:
        return -1
    
# 다른 풀이 - find() 함수 사용
# 찾는 문자 있으면 인덱스 반환
# 찾는 문자가 없으면 자동으로 -1 반환
def solution2(num, k):
    idx = str(num).find(str(k))

    if idx != -1:
        return idx + 1
    else:
        return -1