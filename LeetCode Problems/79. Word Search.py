class Solution:
    def exist(self, board: list[list[str]], word: str) -> bool:

        markers = [[0 for _ in board[0]] for _ in board]


        def bt(pos, r, c):

            if pos >= len(word):
                return True     

            if r > 0 and not markers[r - 1][c] and board[r - 1][c] == word[pos]:
                markers[r - 1][c] = 1
                if bt(pos + 1, r - 1, c):
                    return True
                markers[r - 1][c] = 0

            if r < len(board) - 1 and not markers[r + 1][c] and board[r + 1][c] == word[pos]:
                markers[r + 1][c] = 1
                if bt(pos + 1, r + 1, c):
                    return True
                markers[r + 1][c] = 0

            if c > 0 and not markers[r][c - 1] and board[r][c - 1] == word[pos]:
                markers[r][c - 1] = 1
                if bt(pos + 1, r, c - 1):
                    return True
                markers[r][c - 1] = 0

            if c < len(board[0]) - 1 and not markers[r][c + 1] and board[r][c + 1] == word[pos]:
                markers[r][c + 1] = 1
                if bt(pos + 1, r, c + 1):
                    return True
                markers[r][c + 1] = 0
                

        for i in range(len(board)):
            for j in range(len(board[0])):
                markers[i][j] = 1
                if board[i][j] == word[0]:
                    if bt(1, i, j):
                        return True
                markers[i][j] = 0

        return False