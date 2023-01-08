class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        # Simplest approach would be to take everypossible combination O(n^2)
        # Ow we could resort to using two pointers for the same (but that would need a sorted array)
    

        # nums.sort() This would result in the order of numbers being incorrect -> we'll have to store the indices
        
        # numslist = []
        # for ind, i in enumerate(nums):
        #     numslist.append([i, ind])
        # numslist.sort(key = lambda x : x[0])
        # print(numslist)

        # i = 0
        # j = len(nums) - 1
        # while numslist[i][0] + numslist[j][0] != target:
        #     if numslist[i][0] + numslist[j][0] < target:
        #         i += 1
        #     else:
        #         j -= 1
        # return [numslist[i][1], numslist[j][1]]


        #Hashing Based Approach

        ht = {}
        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in ht:
                return [i, ht[complement]]
            ht[nums[i]] = i
        




ob = Solution()
print(ob.twoSum([2,7,11,15], 9))