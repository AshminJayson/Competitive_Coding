# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:

        
        hm = {}
        while head:
            # print(head)
            if hm.get(head, 0) == 1:
                return True
            hm[head], head = 1, head.next

        return False