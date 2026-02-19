def solution(M, N):
    return M * N - 1

# 총 가위질 횟수 = (가로 자르는 횟수) + (세로 자르는 횟수)
# = (M - 1) + M(N - 1)
# = MN - 1