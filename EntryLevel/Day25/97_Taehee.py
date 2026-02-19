def solution(A, B):

    for i in range(len(A)):
        # A[-i:] - 맨 뒤에서부터 i개의 문자를 앞으로 가져오기
        # A[:-i] - 맨 앞에서부터 i번째 앞까지의 문자를 뒤로 밀기
        pushed_A = A[-i:] + A[:-i]

        if pushed_A == B:
            return i
        
    return -1

# 다른 풀이
def solution2(A, B):
    # find(찾을 단어) 함수: 단어의 시작 인덱스 반환하고, 못 찾으면 -1 반환 
    return (B * 2).find(A)

