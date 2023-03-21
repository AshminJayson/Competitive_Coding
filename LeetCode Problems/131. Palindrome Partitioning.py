class Solution:
    def partition(self, s: str) -> list[list[str]]:

        cs = [i for i in s]
        rs = set()
        rs.add(tuple(cs))


        def bt(cs, pos):

            flag = 1

            for i in cs:
                for j in range(len(i)):
                    if i[j] != i[len(i) - j - 1]:
                        flag = 0
                        break
            

            if flag:
                rs.add(tuple(cs.copy()))


            if pos < len(cs) - 1:

                ts = cs.copy()
                ts[pos] = ts[pos] + ts[pos + 1]
                del ts[pos + 1]

                bt(ts, pos)
                bt(cs, pos + 1)
        
        bt(cs, 0)



        # ALT
        
        # rs = []
        # cs = []

        # def bt(i):

        #     if i >= len(s):
        #         rs.append(cs.copy())
        #         return

        #     for j in range(i, len(s)):
        #         if isPalindrome(s, i, j):
        #             cs.append(s[i: j + 1])
        #             bt(j + 1)
        #             cs.pop()



        # def isPalindrome(s, i , j):

        #     while i < j:
        #         if s[i] != s[j]:
        #             return False

        #         i, j = i + 1, j - 1


        #     return True
        
        # bt(0)
        # return rs

        return rs

        