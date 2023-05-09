class Solution:
    def longestIncreasingPath(self, matrix: list[list[int]]) -> int:


        visited = set()
        dp = {}

        dr = [(1, 0), (-1, 0), (0, 1), (0, -1)]
        

        n = len(matrix)
        m = len(matrix[0])

        def check(i, j, cval):

            if i < 0 or j < 0 or i >= n or j >= m or (i, j) in visited:
                return 0

            if matrix[i][j] <= cval:
                return 0

            if (i, j) in dp:
                return dp[(i, j)]

            visited.add((i, j))

            for r, c in dr:
                if (i, j) not in dp:
                    dp[(i, j)] = 0
                dp[(i, j)] = max(dp[(i, j)], 1 + check(i + r, j + c, matrix[i][j]))
            
            visited.remove((i, j))
            return dp[(i, j)]

        maxlen = 0

        for i in range(n):
            for j in range(m):

                    maxlen = max(maxlen, check(i,j,-1))

        return maxlen
            