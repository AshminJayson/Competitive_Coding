class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:

        #No division ?? whaaaa .... and O(n) tc so no inner loops 💭
        n = len(nums)
        # prefprod = [1] * n
        # postprod = [1] * n

        # for i in range(1, n):
        #     prefprod[i] = prefprod[i - 1] * nums[i - 1]
        # for i in range(n - 2, -1, -1):
        #     postprod[i] = postprod[i + 1] * nums[i + 1]


        #Now it's time for one-pass 😂, how do I do that . warui 😂 why not ? 

        pre = 1
        post = 1
        rt = [1] * n

        for i in range(n):
            rt[i] *= pre
            pre *= nums[i]
            rt[n - i - 1] *= post
            post *= nums[n - i - 1]

        return rt
        # return [postprod[i] * prefprod[i] for i in range(n)]

        #Lesson Learnt : One pass isn't necessary faster than two passes, it just looks cooler -
        # so don't try to over simplify code rather focus on making it understandable

ob = Solution()
print(ob.productExceptSelf([1,2,3,4]))