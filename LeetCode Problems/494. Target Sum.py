class Solution:
    def findTargetSumWays(self, nums: list[int], target: int) -> int:
        
        # Top down + Memoization
        dp = {}

        def dfs(i, val):

            if i == len(nums):
                return 1 if val == target else 0
            if (i, val) in dp:
                return dp[(i, val)]
                
            dp[(i, val)] = dfs(i+1, val + nums[i]) + dfs(i+1, val - nums[i])
            return dp[(i, val)]
            
        return dfs(0, 0)
    
