class Solution:
    def solve(self, board: list[list[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """

        rows = len(board)
        cols = len(board[0])
        nc = [[0 for _ in range(cols)] for _ in range(rows)]
        visited = [[0 for _ in range(cols)] for _ in range(rows)]

        dr = [(0, 1), (0, -1), (1, 0), (-1, 0)]

        def trc(i, j, prev):

            if j < 0 or j >= cols or i < 0 or i >= rows or board[i][j] != prev or visited[i][j] == 1:
                return
            
            nc[i][j] = 1
            visited[i][j] = 1

            for r, c in dr:
                trc(i + r, j + c, board[i][j])


        for i in range(rows):
            if board[i][0] == 'O':
                trc(i, 0, 'O')
            if board[i][cols - 1] == 'O':
                trc(i, cols - 1, 'O')

        for i in range(cols):
            if board[0][i] == 'O':
                trc(0, i, 'O')
            if board[rows - 1][i] == 'O':
                trc(rows - 1, i, 'O')
        
        for i in range(rows):
            for j in range(cols):
                if nc[i][j] == 0:
                    board[i][j] = 'X'



        