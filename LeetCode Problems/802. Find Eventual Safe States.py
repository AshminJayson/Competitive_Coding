class Solution:
    def eventualSafeNodes(self, graph: list[list[int]]) -> list[int]:
        safe = set()

        def dfs(i, visited, graph, safe):
            if i in visited or i in safe: return
            visited.add(i)

            if len(graph[i]) == 0:
                safe.add(i)
                return

            flag = True
            for j in range(len(graph[i])):
                dfs(graph[i][j], visited, graph, safe)
                if graph[i][j] not in safe:
                    flag = False
            
            if flag: safe.add(i)

        visited = set()
        for i in range(len(graph)):
            dfs(i, visited, graph, safe)

        return sorted(list(safe))





            
