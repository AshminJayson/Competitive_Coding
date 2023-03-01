# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        
        count = [0]

        def iterhead(root):
            d = 0
            if not root:
                return d
            ld = rd = 0
            if root.left:
                ld = 1 + iterhead(root.left)
            if root.right:
                rd = 1 + iterhead(root.right)

            count[0] = max(ld + rd, count[0])

            return max(ld, rd)

        hi = iterhead(root)

        return max(hi, count[0])


