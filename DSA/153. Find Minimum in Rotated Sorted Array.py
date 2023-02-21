class Solution:
    def findMin(self, nums: list[int]) -> int:
        lo = 0
        hi = len(nums) - 1

        while lo <= hi:

            print(lo,'-', hi)
            mid = (lo + hi) // 2

            if nums[lo] < nums[hi]:
                hi = mid - 1
            else:
                lo = mid + 1

        return nums[lo]

ob = Solution()
print(ob.findMin([3,4,5,1,2]))
print(ob.findMin([4,5,6,7,0,1,2]))
print(ob.findMin([11,13,15,17]))
