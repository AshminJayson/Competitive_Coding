class Solution:
    def countSubarrays(self, nums: List[int], minK: int, maxK: int) -> int:

        mini, maxi = -1, -1
        l = 0
        count = 0

        for r in range(len(nums)):

            if nums[r] == maxK:
                maxi = r
            if nums[r] == minK:
                mini = r

            # count = 0
            print(mini, maxi, r)

            if nums[r] > maxK or nums[r] < minK:
                    l = r + 1
                    mini = -1
                    maxi = -1

            count += max(0, min(mini, maxi) - l + 1)
            

        return count





