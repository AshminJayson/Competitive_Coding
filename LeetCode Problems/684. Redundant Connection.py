class Solution:
    def findRedundantConnection(self, edges: list[list[int]]) -> list[int]:



        # Approach using Union Find

        parent = [i for i in range(len(edges) + 1)]
        rank = [1] * (len(edges) + 1)

        def find(n):
            p = n + 0
            while p != parent[p]:
                parent[p] = parent[parent[p]]
                p = parent[p]
            return p
        

        def union(n1, n2):

            n1, n2 = find(n1), find(n2)

            if n1 == n2:
                return False

            if rank[n1] >= rank[n2]:
                parent[n2] = n1
                rank[n1] += rank[n2] 
            else:
                parent[n1] = n2
                rank[n2] += rank[n1]
            return True

        for n1, n2 in edges:
            if not union(n1, n2):
                return [n1, n2]
            

        # Approach using DFS
        
        nnode = max(max(row) for row in edges)

        adjMap = {node : [] for node in range(1, nnode + 1)}
        
        for i, j in edges:
            adjMap[i].append(j)
            adjMap[j].append(i)

        def dfs(i, visited):
            if i not in visited:
                visited.add(i)
            else:
                return
            
            for j in adjMap[i]:
                dfs(j, visited)

            
        for i, j in edges[::-1]:
            visited = set()
            # i, j = edge[0], edge[1]
            # print(i, j)
            adjMap[i].remove(j)
            adjMap[j].remove(i)

            dfs(1, visited)
            if len(visited) == nnode:
                return [i, j]

            adjMap[i].append(j)
            adjMap[j].append(i)
        
        return []