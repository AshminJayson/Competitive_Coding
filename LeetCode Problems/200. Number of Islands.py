class Solution:
    def numIslands(self, grid: list[list[str]]) -> int:

        nrows = len(grid)
        ncols = len(grid[0])
        mark = [[0 for _ in range(ncols)] for _ in range(nrows)]
        count = 0
        dirs = [(1, 0), (-1, 0), (0, 1), (0, -1)]

        def dfs(r, c):     

            if r < 0 or c < 0 or r >= nrows or c >= ncols or mark[r][c]:
                return

            if grid[r][c] == '0':
                return 
            
            mark[r][c] = 1

            for dr, dc in dirs:
                dfs(r + dr, c + dc)



        for i in range(nrows):
            for j in range(ncols):
                if grid[i][j] == '1' and not mark[i][j]:
                    count += 1
                    dfs(i, j)

        return count

        

        
