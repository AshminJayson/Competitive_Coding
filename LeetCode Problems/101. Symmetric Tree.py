# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:

        def check(l, r):
            
            if not l and r:
                return False
            if not r and l:
                return False
            if not r and not l:
                return True
            if r and l and r.val != l.val:
                return False

            return check(l.left, r.right) and check(l.right, r.left)

        return check(root.left, root.right)