class Solution:
    def rob(self, nums: list[int]) -> int:

        if len(nums) == 1:
            return nums[0]

        first, second = 0, 0

        for i in nums[1:]:
            tc = max(first + i, second)
            first = second
            second = tc

        fm = max(first, second)
        first, second = 0, 0

        print(nums[:-1])
        for i in nums[:-1]:
            tc = max(first + i, second)
            first = second
            second = tc

        return max(fm, max(first, second))