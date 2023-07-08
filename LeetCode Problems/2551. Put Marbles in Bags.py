from heapq import heapify, heappop

class Solution:
    def putMarbles(self, weights: list[int], k: int) -> int:
        
        mx, mn = [0] * (len(weights) - 1), [0] * (len(weights) - 1)

        for i in range(len(weights) - 1):
            # loss = (weights[i] * 2  + weights[i + 1] * 2) - (weights[i] + weights[i + 1])
            # This can be further written as : 
            loss = weights[i] + weights[i + 1]
            mx[i], mn[i] = loss, -loss

        heapify(mx)
        heapify(mn)


        maxScore, minScore = sum(weights) * 2, sum(weights) * 2

        for i in range(len(weights) - k):
            maxScore -= heappop(mx)
            minScore -= -heappop(mn)

        return maxScore - minScore



ob = Solution()
print(ob.putMarbles([1,3,5,1], 2))
print(ob.putMarbles([1,3], 2))