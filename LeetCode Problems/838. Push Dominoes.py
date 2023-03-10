class Solution:
    def pushDominoes(self, dominoes: str) -> str:

        n = len(dominoes)
        prefix, postfix = [-1] * n, [-1] * n
        prefix[0] = 0 if dominoes[0] == 'R' else -1
        postfix[-1] = n -1 if dominoes[-1] == 'L' else -1

        for i in range(1, n):
            if dominoes[i] == 'R':
                prefix[i] = i
            elif dominoes[i] == 'L':
                prefix[i] = -1
            else:
                prefix[i] = prefix[i - 1]

        for i in range(n - 2, -1, -1):
            if dominoes[i] == 'L':
                postfix[i] = i
            elif dominoes[i] == 'R':
                postfix[i] = -1
            else:
                postfix[i] = postfix[i + 1]


        res = ['.'] * n
        for i in range(n):
            if prefix[i] == -1 and postfix[i] == -1:
                res[i] = '.'
            elif prefix[i] == -1:
                res[i] = 'L'
            elif postfix[i] == -1:
                res[i] = 'R'
            else:
                if i - prefix[i] > postfix[i] - i:
                    res[i] = 'L'
                elif i - prefix[i] < postfix[i] - i:
                    res[i] = 'R'
                    

            
        # print(prefix, '----', postfix, '----', res)



        return "".join(res)