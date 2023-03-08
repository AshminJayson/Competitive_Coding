class node:
    def __init__(self):
        self.children = {}
        self.end = False

class WordDictionary:

    def __init__(self):
        self.root = node()
        
            

    def addWord(self, word: str) -> None:
        
        curr = self.root
        for c in word:
            
            if c not in curr.children:
                curr.children[c] = node()
            curr = curr.children[c]

        curr.end = True


    def search(self, word: str) -> bool:
        
        curr = self.root

        def sear(root, word):

            if not word:
                return True if root.end else False

            if not root:
                return False

            if word[0] == '.':
                for i in root.children:
                    if sear(root.children[i], word[1:]):
                        return True
            else:

                if word[0] not in root.children:
                    return False

                if sear(root.children[word[0]], word[1:]):
                    return True


        return sear(curr, word) 


# Your WordDictionary object will be instantiated and called as such:
# obj = WordDictionary()
# obj.addWord(word)
# param_2 = obj.search(word)