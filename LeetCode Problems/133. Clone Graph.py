"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

class Solution:
    def cloneGraph(self, node: 'Node') -> 'Node':

        # Something's offf

        hm = {}

        def dfs(node):
            if node in hm:
                return hm[node]

            temp = Node(node.val)
            hm[node] = temp

            for n in node.neighbors:
                temp.neighbors.append(dfs(n))

            return temp
        

        clone = dfs(node) if node else None
        print(hm)
        return clone
        