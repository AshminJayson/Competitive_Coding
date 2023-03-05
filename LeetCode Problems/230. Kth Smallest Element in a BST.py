# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:

        # fast = slow = root
        # lt = []

        # def mover(root):
        #     if not root: return

        #     mover(root.right)
        #     lt.append(root.val)
        #     mover(root.left)

        # mover(root)
        

        # return lt[-k]

        #Better Approach

        st = []
        curr = root

        while st or curr:

            while curr:
                st.append(curr)
                curr = curr.left
            curr = st.pop()

            k -= 1
            if k == 0:
                return curr.val
            curr = curr.right

            