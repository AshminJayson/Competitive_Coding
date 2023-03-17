#I am not very happy with this, I had the answer but didn't think it was right and didn't go with the solution

class Trie:
    def __init__(self):
        self.children = {}
        self.end = False
        self.ref = 0

    def addword(self, word):
        curr = self
        for c in word:
            if c not in curr.children:
                curr.children[c] = Trie()
            curr = curr.children[c]
            curr.ref += 1
        curr.end = True

    def removeword(self, word):
        curr = self
        curr.ref -= 1

        for c in word:
            if c in curr.children:
                curr = curr.children[c]
                curr.ref -= 1


            

class Solution:
    def findWords(self, board: list[list[str]], words: list[str]) -> list[str]:

        root = Trie()
        for word in words:
            root.addword(word)

        R, C = len(board), len(board[0])
        valid, visited = set(), set()

        def dfs(r, c, node, word):

            if ( r < 0 or r >= R or c < 0 or c >= C or (r, c) in visited
            or board[r][c] not in node.children or 
            node.children[board[r][c]].ref < 1 ):
                return

            visited.add((r,c))
            node = node.children[board[r][c]]
            word += board[r][c]

            if node.end:
                node.end = False
                valid.add(word)
                root.removeword(word)

            dfs(r + 1, c, node, word)
            dfs(r - 1, c, node, word)
            dfs(r , c + 1, node, word)
            dfs(r, c - 1, node, word)

            visited.remove((r, c))
        
        for i in range(R):
            for j in range(C):
                dfs(i, j, root, "")

        return list(valid)


        