# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        st1, st2 = [], []
        while l1 != None:
            st1.append(l1.val)
            l1 = l1.next
        while l2 != None:
            st2.append(l2.val)
            l2 = l2.next

        prev, pnode = 0, None
        while st1 and st2:
            val = st1[-1] + st2[-1] + prev
            prev = val // 10
            val = val % 10

            temp = ListNode()
            temp.val = val
            temp.next = pnode
            pnode = temp
            st1.pop()
            st2.pop()

        while st1:
            val = st1[-1] + prev
            prev = val // 10
            val = val % 10

            temp = ListNode()
            temp.val = val
            temp.next = pnode
            pnode = temp
            st1.pop()

        while st2:
            val = st2[-1] + prev
            prev = val // 10
            val = val % 10

            temp = ListNode()
            temp.val = val
            temp.next = pnode
            pnode = temp
            st2.pop()

        if prev != 0:
            temp = ListNode()
            temp.val = prev
            temp.next = pnode
            pnode = temp

        return pnode

        
