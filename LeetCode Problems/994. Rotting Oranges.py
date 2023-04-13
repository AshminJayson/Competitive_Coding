class Solution:
    def orangesRotting(self, grid: list[list[int]]) -> int:

        rows = len(grid)
        cols = len(grid[0])

        rotTrack = [[float('inf') for _ in range(cols)] for _ in range(rows)]
        dirs = [(1, 0), (-1, 0), (0, 1), (0, -1)]

        def bfs(vc, q):

            while q:
                i, j, time = q.pop(0)

                if i < 0 or j < 0 or i == rows or j == cols or vc[i][j] == 1 or grid[i][j] == 0:
                    continue

                vc[i][j] = 1
                rotTrack[i][j] = min(rotTrack[i][j], time)

                for r, c in dirs:
                    q.append([i + r, j + c, time + 1])


        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == 2:
                    vc = [[0 for _ in range(cols)] for _ in range(rows)]
                    bfs(vc, [[i, j, 0]])
                    # print(rotTrack)

        mt = 0


        for i in range(rows):
            for j in range(cols):
                if rotTrack[i][j] == float('inf'):
                    if grid[i][j] == 1:
                        return -1
                else:
                    mt = max(rotTrack[i][j], mt)
        
        return mt
        