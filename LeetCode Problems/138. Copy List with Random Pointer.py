"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':

        x = dummy = Node(1)
        k, l, m, df = {}, {}, {}, {}
        count = 0
        itr = head

        while itr:
            temp = Node(itr.val, itr.next)
            x.next = temp

            k[count] = temp
            l[itr] = count
            m[itr] = itr.random
            count += 1

            x, itr = x.next, itr.next
            
        itr = head
        x = dummy.next

        # print(l)
        # print(m)
        for item in m:
            if m[item]:
                df[item] = l[m[item]]       

        print(df)

        while itr:
            if itr.random:
                x.random = k[df[itr]]
            x, itr = x.next, itr.next


        return dummy.next
        
        