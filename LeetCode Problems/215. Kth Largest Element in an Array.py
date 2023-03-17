from heapq import heapify, heappop

class Solution:
    def findKthLargest(self, nums: list[int], k: int) -> int:

        heapify(nums)

        for i in range(len(nums) - k):
            heappop(nums)

        return nums[0]