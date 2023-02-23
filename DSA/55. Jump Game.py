class Solution:
    def canJump(self, nums: list[int]) -> bool:

        # jumps = 0

        # if len(nums) == 1:
        #     return True

        # for ind, item in enumerate(nums):


        #     jumps -= 1
        #     jumps = max(jumps, item)

        #     print(jumps)
        #     if jumps == 0 and ind < len(nums) - 1:
        #         return False

        # return True


        #Lit Approach

        target = len(nums) - 1

        for i in range(len(nums) - 2, -1, -1):
            if nums[i] + i >= target:
                target = i
        
        return True if target == 0 else False

        


ob = Solution()
print(ob.canJump([2,3,1,1,4]))
print(ob.canJump([3,2,1,0,4]))
print(ob.canJump([2]))
print(ob.canJump([2,0,0]))