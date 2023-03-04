# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right


class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:

        if not root:
            return

        def checker(root, subRoot):

            if not root and not subRoot:
                return True

            if root and not subRoot:
                return False
            
            if not root and subRoot:
                return False

            if root and subRoot and root.val != subRoot.val:
                return False

            return checker(root.left, subRoot.left) and checker(root.right, subRoot.right)


        if checker(root, subRoot):
            return True

        return self.isSubtree(root.left, subRoot) or self.isSubtree(root.right, subRoot)