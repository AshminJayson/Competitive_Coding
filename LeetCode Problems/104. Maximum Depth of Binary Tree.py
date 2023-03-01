# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        
        d = 1
        if not root:
            return 0
 
        ld = d +  self.maxDepth(root.left)
        rd = d + self.maxDepth(root.right)

        d = max(ld, rd)
        return d
