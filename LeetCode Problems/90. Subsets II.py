class Solution:
    def subsetsWithDup(self, nums: list[int]) -> list[list[int]]:


        #Naive Approach
        # rs = set()
        # def backtrack(i, s):
        #     if i >= len(nums):
        #         rs.add(tuple(sorted(s.copy())))
        #         return 

        #     s.append(nums[i])
        #     backtrack(i + 1, s)
        #     s.pop()
        #     backtrack(i + 1, s)


        # backtrack(0, [])

        #Time to cook - A lil less sorts

        rs = []

        
        nums.sort()
        rs = set()
        def backtrack(i, s):
            if i >= len(nums):
                rs.add(tuple(s.copy()))
                return 

            s.append(nums[i])
            backtrack(i + 1, s)
            s.pop()
            backtrack(i + 1, s)


        backtrack(0, [])
        return rs    
              
            