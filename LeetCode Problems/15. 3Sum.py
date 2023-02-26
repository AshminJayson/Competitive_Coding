class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        #Feel a lil out of form, but we'll see
        #So basically 3 numbers such that there sum is 0 huh-

        #I shall sort 😂

        nums.sort() #that becomes O (nlogn)
        n = len(nums)
        rt = []
        i = 0
        # while i < n:
        #     if nums[i] > 0:
        #         break
        #     j = n - 1
        #     while j > i + 1:
        #         target = 0 - (nums[i] + nums[j])
        #         if target <= nums[j] and target >= nums[i]:
        #             jset = set(nums[i+1:j]) #This is where I have to make a change, I need a faster way of checking for the given target 

        #             if target in jset:
        #                 rt.append([nums[i], nums[j], target])
                
        #         while j > i + 1 and nums[j] == nums[j - 1]:
        #             j -= 1
        #         j -= 1
        #     while i < n - 1 and nums[i] == nums[i + 1]:
        #         i += 1
        #     i += 1
                
        #308/312 I need to optimize some part of this algo such that it's a teeny bit faster ⚡
        # print(nums)
        # while i < n:
        #     # print(i,j)
        #     jset = set(nums[i+1:j])
        #     target = 0 - (nums[i] + nums[j]) 
        #     # print(target)
        #     iflag, jflag = 0, 0       
        #     if target in jset:
        #         rt.append([nums[i], nums[j], target])



        #     if target >= nums[j]:
        #         iflag = 1
        #     if target <= nums[i]:
        #         jflag = 1

        #     # print(iflag, jflag)
        #     if jflag == 1:
        #         while j > i + 1 and nums[j] == nums[j - 1]:
        #             j -= 1
        #         j -= 1
        #     if iflag == 1:
        #         while i < n - 1 and nums[i] == nums[i + 1]:
        #             i += 1
        #         i += 1
            
        #Let's re-do this

        print(nums)
        while i < n - 2:
            left = i + 1
            right = n - 1

            if i > 0 and nums[i] == nums[i - 1]:
                i += 1
                continue
            
            while left < right:
                val = nums[left] + nums[right] + nums[i]

                if val == 0:
                    rt.append([nums[i], nums[left],nums[right]]) 
                    left += 1
                    right -= 1
                    while nums[left] == nums[left - 1] and left < right:
                        left += 1
                    while nums[right] == nums[right + 1] and left < right:
                        right -= 1 
                elif val < 0:
                    left += 1
                elif val > 0:
                    right -= 1

            i += 1
            

        return rt

ob = Solution()
print(ob.threeSum([-1,0,1,2,-1,-4]))
print(ob.threeSum([0,1,1]))
print(ob.threeSum([0,0,0]))
print(ob.threeSum([1,2,-2,-1]))
