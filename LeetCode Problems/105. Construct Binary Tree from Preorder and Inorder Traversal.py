# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:


        if not preorder:
            return

        root = TreeNode(preorder[0])

        ind = inorder.index(preorder[0])

        # print(ind, preorder[1:1+ind], preorder[1+ind:])

        root.left = self.buildTree(preorder[1:1+ind], inorder[:ind])
        root.right = self.buildTree(preorder[1+ind:], inorder[ind+1:])

        return root