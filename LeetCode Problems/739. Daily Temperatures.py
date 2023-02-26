class Solution:
    def dailyTemperatures(self, temperatures: list[int]) -> list[int]:
        ti = [0] * len(temperatures)
        # print(len(ti))
        st = []
        for ind, item in enumerate(temperatures):
            if not st:
                st.append([item, ind])
            else:
                while st and st[-1][0] < item:
                    ti[st[-1][1]] = (ind - st[-1][1])
                    st.pop()
                st.append([item, ind])

            # print(st, ind)
        while(st):
            ti[st[-1][1]] = 0
            st.pop()
            
        return ti
        

ob = Solution()
print(ob.dailyTemperatures([73,74,75,71,69,72,76,73]))
print(ob.dailyTemperatures([30,40,50,60]))
print(ob.dailyTemperatures([30,60,90]))
