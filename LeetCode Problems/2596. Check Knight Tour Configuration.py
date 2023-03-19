class Solution:
    def checkValidGrid(self, grid: List[List[int]]) -> bool:

        def pc(r, c, val):
            if r < 0 or c < 0 or r >= len(grid) or c >= len(grid):
                return False

            return True if grid[r][c] == val else False


        dir = [(2, 1), (2, -1), (-2, 1), (-2, -1), (1, 2), (-1, 2), (1, -2), (-1, -2)]
        req = len(grid) ** 2
        count = 0

        if grid[0][0] != 0:
            return False

        i, j = 0, 0
        count += 1

        while count != req:
            
            flag = False
            for d in dir:
                if pc(i + d[0], j + d[1], count):
                    i += d[0]
                    j += d[1]
                    flag = True
                    break

            if flag:
                count += 1
                continue

            break
            
        return count == req