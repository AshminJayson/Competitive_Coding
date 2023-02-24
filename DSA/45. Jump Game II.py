class Solution:
    def jump(self, nums: list[int]) -> int:
        # dp = [float('inf')] * len(nums)
        # dp[len(nums) - 1] = 0

        # for i in range(len(nums) - 2, -1, -1):
        #     minVal = float('inf')
            
        #     for j in range(i, min(len(nums) - 1, i + nums[i]) + 1):
        #         minVal = min(dp[j], minVal)

        #     dp[i] = minVal + 1

        # return dp[0]
    

        #Give in to greed

        steps = 0
        lvlMark = 0
        newLvlMark = 0

        
        for i in range(len(nums)):

            if i > lvlMark:
                steps += 1
                lvlMark = newLvlMark
            
            newLvlMark = max(newLvlMark, i + nums[i])


        return steps

ob = Solution()
print(ob.jump([2,3,1,1,4]))
print(ob.jump([2,3,0,1,4]))

        
        