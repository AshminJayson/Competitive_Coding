class Solution:
    def evalRPN(self, tokens: list[str]) -> int:
        hashSet = set(['+', '-', '*', '/'])
        # print(hashSet)
        stack = []

        for i in tokens:
            if i in hashSet:
                top = stack[-1]
                stack.pop()
                topsec = stack[-1]
                stack.pop()

                res = 0
                if i == '+':
                    res = topsec + top
                elif i == '/':
                    res = int(topsec / top)
                elif i == '*':
                    res = topsec * top
                else:
                    res = topsec - top

                # print(res, stack)
                stack.append(res)
            else:
                stack.append(int(i))

        return stack[-1]

ob = Solution()
print(ob.evalRPN(["2","1","+","3","*"]))
print(ob.evalRPN(["4","13","5","/","+"]))
print(ob.evalRPN(["10","6","9","3","+","-11","*","/","*","17","+","5","+"]))
