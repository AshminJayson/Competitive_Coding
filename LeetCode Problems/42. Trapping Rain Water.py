class Solution:
    def trap(self, height: list[int]) -> int:
        # prefix = [0]
        # postfix = [0]

        # for i in range(1, len(height)):
        #     prefix.append(max(height[i - 1], prefix[i - 1]))
        # for i in range(len(height) - 2, -1, -1):
        #     postfix.insert(0, max(height[i + 1], postfix[0]))

        # # print(prefix, postfix)
        # water = 0
        # for i in range(len(height)):
        
        #     if min(prefix[i], postfix[i]) >= height[i]:
        #         water += min(prefix[i], postfix[i]) - height[i]
        # print(water)


        # Time for a faster alternate approach and probably the best way of approach


        l, r = 0, len(height) - 1
        max_l, max_r = 0, 0

        sw = 0
        while l < r:
            max_l = max(max_l, height[l])
            max_r = max(max_r, height[r])

            if max_l < max_r :
                sw += max_l - height[l]
                l += 1
            else:
                sw += max_r - height[r]
                r -= 1

        print(sw)
        return sw


ob = Solution()
ob.trap([0,1,0,2,1,0,1,3,2,1,2,1])
ob.trap([4,2,0,3,2,5])