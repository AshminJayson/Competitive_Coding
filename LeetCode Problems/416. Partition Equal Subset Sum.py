class Solution:
    def canPartition(self, nums: list[int]) -> bool:


        if sum(nums) % 2 != 0:
            return False

        # Trying out the top down recursive solution : TLE 66/141

        # def dfs(i, s1):
            
        #     if (i, s1) in dp:
        #         return dp[(i, s1)]
            
        #     if i == len(nums):
        #         return True if s1 == rs else False

        #     op1 = dfs(i+1, s1 + nums[i])
        #     op2 =  dfs(i+1, s1)

        #     dp[(i+1, s1 + nums[i])] = op1
        #     dp[(i+1, s1)] = op2

        #     return op1 or op2    

        # return dfs(0, s1)

        dp = set()
        dp.add(0)
        rs = sum(nums) // 2

        for i in range(len(nums) - 1, -1, -1):
            
            temp = []
            for j in dp:
                temp.append(j + nums[i])
            dp.update(temp)
            # print(rs, dp)

            if rs in dp:
                return True

        return False          

        