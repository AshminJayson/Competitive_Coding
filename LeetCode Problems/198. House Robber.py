class Solution:
    def rob(self, nums: list[int]) -> int:

        # n = len(nums)
        # if n == 1:
        #     return nums[0]
        
        # if n == 3:
        #     return max(nums[1], nums[0] + nums[2])

        # if n > 3:
        #     nums[n - 3] = nums[n - 3] + nums[n - 1]

        # for i in range(n - 4, -1, -1):
        #     nums[i] = nums[i] + max(nums[i + 2], nums[i + 3])
        
        # # print(nums)
        # return max(nums[0], nums[1])
        

        # Memoisation

        if len(nums) == 1:
            return nums[0]

        first, second = 0, 0

        for i in nums:
            tc = max(i + first, second)
            first = second
            second = tc

        return max(first, second)

        