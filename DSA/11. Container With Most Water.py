class Solution:
    def maxArea(self, height: list[int]) -> int:
        #The question has made an assumption that there isn't any water above a line
        left = 0
        right = len(height) - 1
        maxwater = 0
        while left < right:

            currwater = min(height[left],height[right]) * (right - left)
            maxwater = max(maxwater, currwater)


            if height[left] < height[right]:
                left += 1
            else:
                right -=1

        return maxwater

ob = Solution()
print(ob.maxArea([1,8,6,2,5,4,8,3,7]))