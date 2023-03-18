class Solution:
    def combinationSum(self, candidates: list[int], target: int) -> list[list[int]]:


        #Approach 1
        # rs = set()

        # def backtrack(cs, cl):

        #     if cs == target:
        #         rs.add(tuple(cl))
        #     if cs > target:
        #         return

        #     for num in candidates:
        #         cl.append(num)
        #         backtrack(cs + num, cl)
        #         cl.pop()

        #Approach 2
        
        rs = []

        def bt(i, ts, cl):

            if ts == target:
                rs.append(cl.copy())
                return

            if ts > target or i >= len(candidates):
                return

            #Add i
            cl.append(candidates[i])
            bt(i, ts + candidates[i], cl)
            #Don't Add i
            cl.pop()
            bt(i + 1, ts, cl)

        bt(0, 0, [])
        return rs