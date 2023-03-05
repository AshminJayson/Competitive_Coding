# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:

        if not root:
            return []

        q = [root]


        # print(q)
        op = []

        count = len(q)
        temp = []
        while q and count > 0:
            # print(q)
            i = q.pop()


            temp.append(i.val)

            if i.left:
                q.insert(0, i.left)
            if i.right:
                q.insert(0, i.right)

            count -= 1

            if count == 0:
                op.append(temp)
                temp = []
                count = len(q)

        return op


        
