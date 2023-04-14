class Solution:
    def findRedundantConnection(self, edges: list[list[int]]) -> list[int]:

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