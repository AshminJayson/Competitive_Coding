# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:

        def bstCheck(root, minc, maxc):
            if not root:
                return True

            print(root.val, '<----', minc, maxc)
            if root.val <= minc or root.val >= maxc:
                return False


            return bstCheck(root.left, min(root.val, minc), root.val) and bstCheck(root.right, root.val,  max(root.val, maxc))

        return bstCheck(root, float('-inf'), float('inf'))