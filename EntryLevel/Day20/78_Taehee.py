def solution(keyinput, board):
    x, y = 0, 0
    max_x = board[0] // 2
    max_y = board[1] // 2

    moves = {
        "up": (0, 1),
        "down": (0, -1),
        "left": (-1, 0),
        "right": (1, 0)
    }

    for key in keyinput:
        dx, dy = moves[key]

        # if -max_x <= x + dx <= max_x and -max_y <= y + dy <= max_y:
        if abs(x + dx) <= max_x and abs(y + dy) <= max_y:
            x += dx
            y += dy

    return [x, y]