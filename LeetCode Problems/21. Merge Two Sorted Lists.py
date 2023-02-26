from copy import copy

# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:

    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:

        
        if list1 == None:
            return list2
        if list2 == None:
            return list1


        dummyiter = dummy = ListNode()

        
        while list1 != None and list2 != None:
            if list1.val <= list2.val:
                dummyiter.next = list1
                dummyiter = dummyiter.next
                list1 = list1.next
            else:
                dummyiter.next = list2
                dummyiter = dummyiter.next
                list2 = list2.next


        if list1 != None:
            dummyiter.next = list1

        if list2 != None:
            dummyiter.next = list2

        return dummy.next