# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:

        truth = [True]

        def bc(root):

            if not root:
                return 0

            ld = 1 + bc(root.left)
            rd = 1 + bc(root.right)

            if ld - rd > 1 or ld - rd < -1: 
                truth[0] = False

            d = max(ld, rd)

            return d
        
        bc(root)

        return truth[0]