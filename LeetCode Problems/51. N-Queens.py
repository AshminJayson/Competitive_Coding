class Solution:
    def solveNQueens(self, n: int) -> list[list[str]]:

        # For two elements (x, y) and (p, q) they are on the same diagonal iff (p - q) == (x - y) or (p + q) == (x + y)

        rs = []
        cqpos = []
        
        def checkAttack(i, j):
            for qr, qc in cqpos:
                if qr == i  or  qc == j:
                    return True

                if qr + qc == i + j or qr - qc == i - j:
                    return True

            return False

        def bt(pos):

            if len(cqpos) >= n:
                stl = [['.' for _ in range(n)] for _ in range(n)]
                for r, c in cqpos:
                    stl[r][c] = 'Q'
                for i in range(len(stl)):
                    stl[i] = ''.join(stl[i])
                rs.append(stl)
                return

            for i in range(pos, n ** 2):
                r = i // n
                c = i % n

                if not checkAttack(r, c):
                    cqpos.append([r, c])
                    bt(i+1)
                    cqpos.pop()
                

        bt(0)
        return rs
                

        
