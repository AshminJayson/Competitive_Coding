# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:

        di = dummy = ListNode()

        while len(lists) != 0:

            
            mini = -1
            minval = float('inf')

            for i in range(len(lists)):


                if lists[i] and lists[i].val <= minval:
                    minval = lists[i].val
                    mini = i

            if mini == -1:
                break

            di.next = lists[mini]
            lists[mini] = lists[mini].next
            
            di = di.next

        #The ideal solution would be merging them in pairs of two and merging that onto the next.

        return dummy.next

