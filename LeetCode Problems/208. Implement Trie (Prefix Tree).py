class node:
    def __init__(self, val):
        self.val = val
        self.children = []
        self.markend = False


class Trie:

    def __init__(self):
        self.root = node(None)

    def insert(self, word: str) -> None:

        def dfi(root, word):
            
            if not word:
                root.markend = True
                return 

            flag = 0
            for i in root.children:
                if i.val == word[0]:
                    flag = 1
                    dfi(i, word[1:])
            
            if flag == 0:
                root.children.append(node(word[0]))
                dfi(root.children[-1], word[1:])
        

        dfi(self.root, word)

        # def dfs(root):
        #     if not root:
        #         return

        #     print(root.val)
        #     for i in root.children:
        #         dfs(i)

        # dfs(self.root)

    def search(self, word: str) -> bool:
        
        def dfc(root, word):
            if not word:
                if root.markend:
                    return True
                else:
                    return False

            for i in root.children:
                if i.val == word[0]:
                    return dfc(i, word[1:])

            return False

        return dfc(self.root, word)

            

    def startsWith(self, prefix: str) -> bool:
        
        def dfc(root, word):

            if not word:
                return True

            for i in root.children:
                if i.val == word[0]:
                    return dfc(i, word[1:])

            return False

        return dfc(self.root, prefix)

# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)