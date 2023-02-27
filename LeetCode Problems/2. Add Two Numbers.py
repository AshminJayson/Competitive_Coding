# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:

        dh = dummy = ListNode()
        carry = 0

        while l1 and l2:
            
            sm = carry + l1.val + l2.val
            carry = sm // 10
            sm %= 10
            

            temp = ListNode(sm)
            dh.next = temp

            dh = dh.next
            l1, l2 = l1.next, l2.next

        while l1:
            sm = carry + l1.val
            carry = sm // 10
            sm %= 10

            temp = ListNode(sm)
            dh.next = temp

            dh = dh.next
            l1 = l1.next

        while l2:
            sm = carry + l2.val
            carry = sm // 10
            sm %= 10

            temp = ListNode(sm)
            dh.next = temp

            dh = dh.next
            l2 = l2.next

        if carry != 0:
            temp = ListNode(carry)

            dh.next = temp

        return dummy.next

