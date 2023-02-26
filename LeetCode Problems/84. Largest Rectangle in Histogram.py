class Solution:
    def largestRectangleArea(self, heights: list[int]) -> int:
        
        maxArea = 0
        # heights.append(0)

        # st = []
        # for i in heights:
        #     # print('i', i)
        #     length = 0

        #     temp = []
        #     while st and st[-1] > i:
        #         # print('-1', st[-1])
        #         length += 1
        #         maxArea = max(st[-1] * length, maxArea)
        #         st.pop()
        #         temp.append(i)
        #     st.extend(temp)
        #     st.append(i)


        # Alternate Solution

        st = []
        heights.append(0)

        for ind, item in enumerate(heights):
            upto = ind
            while st and st[-1][1] > item:
                maxArea = max(st[-1][1] * (ind - st[-1][0]), maxArea)
                upto = st[-1][0]
                st.pop()
            st.append([upto, item])
            print(st)


            # print(st)
        return maxArea

ob = Solution()
print(ob.largestRectangleArea([2,1,5,6,2,3]))
print(ob.largestRectangleArea([2,4]))
print(ob.largestRectangleArea([2,1,2]))