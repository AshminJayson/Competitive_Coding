from collections import Counter

def check(tcr):
    for j in tcr:
        if tcr[j] > 1 and j != '.':
            return 1
    return 0

class Solution:
    def isValidSudoku(self, board: list[list[str]]) -> bool:

        #Let's try the naive O(n^2) approach
        for i in range(9):
            longar.extend(board[i])
            tcr = Counter(board[i])
            if check(tcr) == 1:
                return False
            tcc = Counter([j[i] for j in board])
            if check(tcc) == 1:
                return False

            #That's the easy stuff out of the way, now 3 x 3? 🤔
            #It's basically 9 * O(n ^ 2) ~ O(n ^ 2) so I could just do that, but there seems to be a better way. 
            
        dictlist = []
        dictlist.append(Counter(sum([i[:3] for i in board[:3]],[])))
        dictlist.append(Counter(sum([i[3:6] for i in board[:3]], [])))
        dictlist.append(Counter(sum([i[6:9] for i in board[:3]], [])))
        dictlist.append(Counter(sum([i[:3] for i in board[3:6]], [])))
        dictlist.append(Counter(sum([i[3:6] for i in board[3:6]], [])))
        dictlist.append(Counter(sum([i[6:9] for i in board[3:6]], [])))
        dictlist.append(Counter(sum([i[:3] for i in board[6:9]], [])))
        dictlist.append(Counter(sum([i[3:6] for i in board[6:9]], [])))
        dictlist.append(Counter(sum([i[6:9] for i in board[6:9]], [])))

        for i in dictlist:
            if check(i) == 1:
                    return False

        return True

        #Well this is the right solution but something is just off, it was easy and also boring 😂
        #Although I did see a new set based approach and a formula for set indices = i//3 * 3 + j // 3 
        #Which can be used when the matrix is represented as a single array

ob = Solution()
ret = ob.isValidSudoku([["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]])
print(ret)