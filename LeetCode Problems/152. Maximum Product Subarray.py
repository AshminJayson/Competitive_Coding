class Solution:
    def maxProduct(self, nums: list[int]) -> int:

        resMax, cMax, cMin = float('-inf'), 1, 1

        for i in nums:

            if i < 0:
                cMax, cMin = cMin, cMax

            cMax = max(cMax * i, i)
            cMin = min(cMin * i, i)

            resMax = max(cMax, resMax)

        return resMax