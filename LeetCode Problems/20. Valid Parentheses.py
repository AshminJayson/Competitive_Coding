from collections import deque
class Solution:
    def isValid(self, s: str) -> bool:
        stack = deque()

        hashDict = {
            ')':'(',
            ']':'[',
            '}':'{'
        }

        for i in s:
            if i == '(' or i == '[' or i == '{':
                stack.append(i)
            else:
                if len(stack) == 0:
                    return False
                top = stack[-1]
                # print(top, stack, i)
            
                if top != hashDict[i]:
                    return False
                else:
                    stack.pop()

        if len(stack) == 0:
            return True

ob = Solution()
print(ob.isValid("()"))
print(ob.isValid("()[]{}"))
print(ob.isValid("(]"))