class MinStack:

    def __init__(self):
        self.stack = []
        self.tp = -1
        self.minStack = []
        

    def push(self, val: int) -> None:
        self.tp += 1
        self.stack.append(val)

        if self.tp == 0:
            self.minStack.append(val)
        else:
            if val < self.minStack[-1]:
                self.minStack.append(val)
            else:
                self.minStack.append(self.minStack[-1])

    def pop(self) -> None:
        self.stack.pop()
        self.minStack.pop()
        self.tp -= 1

    def top(self) -> int:
        # print(self.stack)

        return self.stack[self.tp]

    def getMin(self) -> int:
        return self.minStack[self.tp]

ob = MinStack()
print(ob.push(1))
print(ob.pop())
print(ob.push(2))
print(ob.push(3))
print(ob.getMin())
print(ob.top())