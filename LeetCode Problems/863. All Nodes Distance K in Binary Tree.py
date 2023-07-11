# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def distanceK(self, root: TreeNode, target: TreeNode, k: int) -> List[int]:

        #Mutation of tree by adding additional pointers to parent

        def addBack(root, parent):
            if not root: return

            if (root.val == target.val): target.parent = parent
            root.parent = parent
            # print(root)
            addBack(root.left, root)
            addBack(root.right, root)

        addBack(root, None)
        visited = set()

        def dfs(root, depth, kDist):
            if not root or root in visited:
                return []
            if depth == k:
                kDist.append(root.val)

            visited.add(root)

            dfs(root.left, depth + 1, kDist)
            dfs(root.right, depth + 1, kDist)
            dfs(root.parent, depth + 1, kDist)
            
            return kDist

        return dfs(target, 0, [])


