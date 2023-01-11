class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:

        #How do I even begin this? 
        #To make sure the algo runs in O(n) tc ?? whaa 🦥
        #I need to think of a one pass solution demnnn!

        #Time to read about union find.
        
        #Sometimes one needs a hit to understand where he's wrong and I've found it right about now

        if len(nums) == 0:
            return 0
            
        numset = set(nums)

        maxl = 1
        for num in numset:
            currl = 1
            if num - 1 in numset:
                continue
                
            while num + 1 in numset:
                num += 1
                currl += 1

            maxl = max(currl, maxl) 
        
        return maxl

ob = Solution()
print(ob.longestConsecutive([0,3,7,2,5,8,4,6,0,1]))