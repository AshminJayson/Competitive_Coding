class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        dic = {}

        for i in nums:
            if i in dic:
                return True
            else:
                dic[i] = 1

        return False