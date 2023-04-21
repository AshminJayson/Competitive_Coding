class Solution:
    def lengthOfLIS(self, nums: list[int]) -> int:

        dp = [1] * len(nums)

        for i in range(len(nums) - 1, -1, -1):
            temp = [1]

            for j in range(i + 1, len(nums)):
                if nums[i] < nums[j]:
                    temp.append(1 + dp[j])
                    
            dp[i] = max(temp)

        return max(dp)