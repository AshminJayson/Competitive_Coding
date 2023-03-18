class Solution:
    def permute(self, nums: list[int]) -> list[list[int]]:

        rs = []

        def bt(l, pm):
            if len(l) == 0:
                rs.append(pm.copy())
                return

            for i in range(len(l)):
                pm.append(l[i])
                bt(l[:i] + l[i+1:], pm)
                pm.pop()

        bt(nums, [])            
        return rs

