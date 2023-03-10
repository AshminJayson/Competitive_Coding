# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

from random import randint
class Solution:

    def __init__(self, head: Optional[ListNode]):
        self.head = head
        self.nodes = []

        while head:
            self.nodes.append(head)
            head = head.next

        self.len = len(self.nodes)
    def getRandom(self) -> int:

        return self.nodes[randint(0, self.len - 1)].val
        


# Your Solution object will be instantiated and called as such:
# obj = Solution(head)
# param_1 = obj.getRandom()