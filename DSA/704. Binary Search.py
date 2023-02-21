class Solution:
    def search(self, nums: list[int], target: int) -> int:

        lo = 0
        hi = len(nums)

        while lo < hi:
            mid = (lo + hi) // 2

            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                lo = mid + 1
            else:
                hi = mid

        return -1

ob = Solution()
print(ob.search([-1,0,3,5,9,12], 9))
print(ob.search([-1,0,3,5,9,12], 2))
print(ob.search([2], 2))