class Solution:
    def search(self, nums: list[int], target: int) -> int:
        lo = 0
        hi = len(nums) - 1

        while lo <= hi:
            mid = (lo + hi) // 2
            # print(lo, mid, hi)

            if nums[mid] == target:
                return mid
            
            if nums[mid] >= nums[lo]:
                if target >= nums[lo] and target <= nums[mid]:
                    hi = mid - 1
                else:
                    lo = mid + 1
            else:
                if target >= nums[mid] and target <= nums[hi]:
                    lo = mid + 1
                else:
                    hi = mid - 1


        return -1

ob = Solution()
print(ob.search([4,5,6,7,0,1,2], 0))
print(ob.search([4,5,6,7,0,1,2], 3))
print(ob.search([4,5,6,7,0,1,2], 4))
print(ob.search([4,5,6,7,0,1,2], 5))
print(ob.search([4,5,6,7,0,1,2], 1))
print(ob.search([4,5,6,7,0,1,2], 2))
print(ob.search([1], 0))