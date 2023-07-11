# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':


        #Naive Approach : Pick out every node and perform a search starting from that node

        lcmSet, lcm = False, 0
        def postorder(root):

            nonlocal lcmSet, lcm

            if not root: return

            postorder(root.left)
            postorder(root.right)

            flagA, flagB = False, False
            def check(root):
                nonlocal p, q
                nonlocal flagA, flagB

                if not root or lcmSet: return

                if root.val == p.val: flagA = True
                if root.val == q.val: flagB = True

                check(root.left)
                check(root.right)

                if flagA and flagB:
                    return True

            if check(root) and not lcmSet:
                lcmSet = True
                lcm = root

        postorder(root)              
        return lcm


        #Optmised DFS/Postorder Traversal

        if not root: return None
        if root.val == p.val or root.val == q.val: return root 

        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)

        if left and right: return root
        return left if left else right

            

