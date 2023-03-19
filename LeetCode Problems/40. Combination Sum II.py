class Solution:
    def combinationSum2(self, candidates: list[int], target: int) -> list[list[int]]:

        rs = []
        candidates.sort()

        def bt(cs, i, l):

            if cs == target:
                rs.append(l.copy())
                return
            
            if cs > target or i >= len(candidates):
                return

            prev = -1
            for pos in range(i, len(candidates)):
                if candidates[pos] == prev:
                    continue

                l.append(candidates[pos])
                bt(cs + candidates[pos], pos + 1, l)

                prev = l.pop()

        bt(0, 0, [])
        return rs