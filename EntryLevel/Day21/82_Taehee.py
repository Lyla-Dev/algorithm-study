def solution(board):
    n = len(board)

    for r in range(n):
        for c in range(n):
            if board[r][c] == 1:

                for dr in [-1, 0, 1]:
                    for dc in [-1, 0, 1]:
                        nr, nc = r + dr, c + dc

                        if 0 <= nr < n and 0 <= nc < n and board[nr][nc] == 0:
                            board[nr][nc] = 2 # 위험 구혁으로 덮어쓰기

    return sum(row.count(0) for row in board)
