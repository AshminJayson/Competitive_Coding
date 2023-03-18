class Solution:
    def subsets(self, nums: list[int]) -> list[list[int]]:


        #Approach 1

        # def backtrack(i, s):

        #     rs.append(s.copy())

        #     for j in range(i, len(nums)):
        #         s.append(nums[j])
        #         backtrack(j + 1, s)
        #         s.pop()


        rs = []
        def backtrack(i, s):
            if i >= len(nums):
                rs.append(s.copy())
                return 

            s.append(nums[i])
            backtrack(i + 1, s)
            s.pop()
            backtrack(i + 1, s)


        backtrack(0, [])
        return rs    