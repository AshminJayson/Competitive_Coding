class Solution:

         

    def carFleet(self, target: int, position: list[int], speed: list[int]) -> int:
        poSpeed = []
        # for ind in range(len(position)):
        #     poSpeed.append([position[ind], speed[ind]])

        # poSpeed.sort()
        # # print(poSpeed)

        # st = [poSpeed[0]]
        # for i in poSpeed[1:]:
        #     flag = 0
        #     temp = i
        #     # print('temp' , temp)
        #     while st:
        #         flag = 0    
        #         obj = st.pop()
        #         objt = (target - obj[0])/obj[1]
        #         tempt = (target - temp[0])/temp[1]

        #         # print(obj, i)
        #         if objt <= tempt:
        #             temp = [temp[0], temp[1]]
        #         else:
        #             st.append(obj)
        #             st.append(temp)
        #             flag = 1
        #             break
        #         # print('stack', st)
        
        #     if flag == 0:
        #         st.append(temp)

        #Lemme just put this here as well

        packet = ([p, s] for p, s in zip(position, speed))
        stack = []

        for p, s in sorted(packet)[::-1]:
            stack.append((target - p) / s)

            if len(stack) > 1 and stack[-2] >= stack[-1]:
                stack.pop()
            

        return len(stack)



ob = Solution()
print(ob.carFleet(12, [10,8,0,5,3], [2,4,1,1,3]))
print(ob.carFleet(10, [3], [3]))
print(ob.carFleet(100, [0,2,4], [4,2,1]))
print(ob.carFleet(10, [6,8], [3,2]))
print(ob.carFleet(10, [0,4,2], [2,1,3]))


