def solution(cipher, code):
    answer= ''
    for i in range(code-1, len(cipher), code):
        answer += cipher[i]

    return answer

# 다른 풀이
def solution2(cipher, code):
    # 인덱스 code-1 부터 끝까지, code 간격으로
    return cipher[code-1::code]
