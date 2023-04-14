class Solution:
    def findOrder(self, numCourses: int, prerequisites: list[list[int]]) -> list[int]:

        preMap = {crs: [] for crs in range(numCourses)}

        order = []

        for crs, pre in prerequisites:
            preMap[crs].append(pre)

        inlist = set()
        visited = set()

        def dfs(crs):
            if crs in visited:
                return False
            if preMap[crs] == []:
                if crs not in inlist:
                    inlist.add(crs)
                    order.append(crs)
                return True

            visited.add(crs)
            for pre in preMap[crs]:
                if not dfs(pre): return False

            visited.remove(crs)
            preMap[crs] = []
            if crs not in inlist:
                inlist.add(crs)
                order.append(crs)
            return True
            

        for crs in range(numCourses):
            if not dfs(crs): return []

        return order