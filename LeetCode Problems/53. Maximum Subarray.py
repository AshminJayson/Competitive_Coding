class Solution:
    def maxSubArray(self, nums: list[int]) -> int:

        cs = ms = nums[0]

        for i in nums[1:]:

            cs = max(cs + i, i)
            ms = max(cs, ms)

        return ms
    
ob = Solution()
print(ob.maxSubArray([-2,1,-3,4,-1,2,1,-5,4]))
print(ob.maxSubArray([1]))
print(ob.maxSubArray([5,4,-1,7,8]))
print(ob.maxSubArray([-2,-1,-3]))
        