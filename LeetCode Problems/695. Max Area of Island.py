class Solution:
    def maxAreaOfIsland(self, grid: list[list[int]]) -> int:

        nrows = len(grid)
        ncols = len(grid[0])
        mark = [[0 for _ in range(ncols)] for _ in range(nrows)]
        maxarea = [0]
        dirs = [(1, 0), (-1, 0), (0, 1), (0, -1)]

        def dfs(r, c, currarea):     

            if r < 0 or c < 0 or r >= nrows or c >= ncols or mark[r][c]:
                return

            if grid[r][c] == 0:
                return 
            
            currarea[0] += 1
            maxarea[0] = max(maxarea[0], currarea[0])
            mark[r][c] = 1

            for dr, dc in dirs:
                dfs(r + dr, c + dc, currarea)



        for i in range(nrows):
            for j in range(ncols):
                if grid[i][j] == 1 and not mark[i][j]:
                    dfs(i, j, [0])

        return maxarea[0]