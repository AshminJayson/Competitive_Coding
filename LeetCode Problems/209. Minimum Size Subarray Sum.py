class Solution:
    def minSubArrayLen(self, target: int, nums: list[int]) -> int:

        l, r = -1, 0
        csum, clen = 0, float('inf')
        while r < len(nums):

            csum += nums[r]
            while csum >= target:
                l += 1
                csum -= nums[l]
                clen = min(clen, r-l+1)

            r += 1

        return 0 if clen == float('inf') else clen