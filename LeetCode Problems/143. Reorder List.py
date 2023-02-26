# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """



        if not head or not head.next:
            return

        slow = fast = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        midsplit = slow.next
        slow.next = None


        #reverse midsplit
        prev = None

        while midsplit:
            curritem = midsplit.next
            midsplit.next = prev
            prev = midsplit
            midsplit = curritem



        # Merge
        temphead = head
        while prev:
            
            tempheadnext = temphead.next
            prevheadnext = prev.next

            temphead.next = prev
            temphead = tempheadnext
            
            prev.next = tempheadnext
            prev = prevheadnext
            



    
