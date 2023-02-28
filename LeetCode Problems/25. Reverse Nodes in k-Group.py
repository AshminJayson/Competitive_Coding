# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:

        curr, prev = head, None

        cursor = head
        for _ in range(k):
            if not cursor: return head
            cursor = cursor.next
        


        count = 1
        while count <= k:
            nxt = curr.next
            curr.next = prev
            prev = curr
            curr = nxt

            count += 1

        
        head.next = self.reverseKGroup(curr, k)

        return prev
        


        


