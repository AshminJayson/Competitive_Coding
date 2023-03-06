# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        #This abomination is truthfully mine !!!
        
        ms = [float('-inf')]

        def summy(root):

            ls = rs = 0
            if root.left:
                ls = max(summy(root.left), 0)
            if root.right:
                rs = max(summy(root.right), 0)


            ms[0] = max(ls + rs + root.val, ms[0])
            return root.val + max(ls, rs)

        return max(summy(root), ms[0])
            