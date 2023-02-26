import math

class Solution:
    def minEatingSpeed(self, piles: list[int], h: int) -> int:
        
        lo = 1
        hi = max(piles)

        while lo <= hi:
            print(lo,' ',hi)
            k = (lo + hi) // 2

            totalTime = 0

            for i in piles:
                totalTime += math.ceil(i / k)

            if totalTime > h:
                lo = k + 1
            else:
                hi = k - 1

        return lo


ob = Solution()
print(ob.minEatingSpeed([3,6,7,11], 8))
print(ob.minEatingSpeed([30,11,23,4,20], 5))
print(ob.minEatingSpeed([30,11,23,4,20], 6))