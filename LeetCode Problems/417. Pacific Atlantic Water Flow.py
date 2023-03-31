class Solution:
    def pacificAtlantic(self, heights: list[list[int]]) -> list[list[int]]:
        
        ao, po = set(), set()
        rows = len(heights)
        cols = len(heights[0])
        
        dr = [(0, 1), (0, -1), (1, 0), (-1, 0)]


        def os(i, j, prev, oset):

            if (i, j) in oset or i < 0 or j < 0 or i >= rows or j >= cols or heights[i][j] < prev:
                return 

            oset.add((i, j))

            for r, c in dr:
                os(i + r, j + c, heights[i][j], oset)

        for r in range(rows):
            os(r, 0, heights[r][0], po)
            os(r, cols - 1, heights[r][cols - 1], ao)

        for c in range(cols):
            os(0, c, heights[0][c], po)
            os(rows - 1, c, heights[rows - 1][c], ao)

        
        res = []
        for i in po:
            if i in ao:
                res.append(i)

        return res







            
            

            