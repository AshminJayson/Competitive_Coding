# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        if head == None:
            return head

        
        prev = ListNode(head.val, None)
        head = head.next
        while head != None:
            x = ListNode(head.val, prev)
            prev = x
            head = head.next

        return prev


        # prev, curr = None, head

        # while curr:
        #     nxt = curr.next
        #     curr.next = prev
        #     prev = curr
        #     curr = nxt

        # return prev
