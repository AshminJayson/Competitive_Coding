from collections import defaultdict

class Solution:
    def ladderLength(self, beginWord: str, endWord: str, wordList: list[str]) -> int:

        neiMap = defaultdict(list)

        if endWord not in wordList:
            return 0

        for word in wordList:
            for j in range(len(word)):
                neiMap[word[:j] + '*' + word[j+1:]].append(word)

        q = [beginWord]
        visited = set([beginWord])
        moves = 1
        while q:
            for i in range(len(q)):
                word = q.pop(0)
                if word == endWord:
                    return moves
                for j in range(len(word)):
                    for tword in neiMap[word[:j] + '*' + word[j+1:]]:
                        if tword not in visited:
                            q.append(tword)
                            visited.add(tword)
            moves += 1
            
        return 0
                            


            