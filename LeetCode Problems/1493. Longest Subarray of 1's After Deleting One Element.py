class Solution:
    def longestSubarray(self, nums: list[int]) -> int:

        first, last = 0, 0
        zindex = -1

        i = 0
        mx, clen = 0, 0
        while i < len(nums):
            if nums[i] == 0:
                if zindex != -1:
                    clen = i - zindex
                    zindex = i
                else:
                    zindex = i
                    clen += 1
            else:
                clen += 1 

            mx = max(mx, clen)
            i += 1

        return mx - 1