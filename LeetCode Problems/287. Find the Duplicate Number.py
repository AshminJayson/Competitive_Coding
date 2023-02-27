class Solution:
    def findDuplicate(self, nums: List[int]) -> int:

        hm = {}

        for i in nums:

            if hm.get(i, 0) == 1:
                return i

            hm[i] = 1