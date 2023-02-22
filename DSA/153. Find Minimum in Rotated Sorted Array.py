class Solution:
    def findMin(self, nums: list[int]) -> int:
        
        lo = 0
        hi = len(nums) - 1
        minVal = 10000

        while lo <= hi:

            mid = (lo + hi) // 2
            # print(mid, lo, hi)    
            if nums[mid] >= nums[lo]:
                minVal = min(minVal, nums[lo])
                lo = mid + 1
            else:   
                minVal = min(minVal, nums[mid])
                hi = mid

        return minVal
        






ob = Solution()
print(ob.findMin([3,4,5,1,2]))
print(ob.findMin([4,5,6,7,0,1,2]))
print(ob.findMin([11,13,15,17]))
print(ob.findMin([2,3,4,5,1]))
print(ob.findMin([1]))
