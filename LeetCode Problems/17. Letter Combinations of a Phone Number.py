class Solution:
    def letterCombinations(self, digits: str) -> list[str]:

        ml = [[], [], ['a', 'b', 'c'], ['d','e','f'], ['g', 'h', 'i'], ['j','k','l'], ['m', 'n', 'o'], ['p', 'q', 'r', 's'], ['t', 'u', 'v'],['w','x','y','z']]
        
        rs, cs = [], []

        if len(digits) == 0:
            return []
            
        def bt(i):

            if i >= len(digits):
                rs.append(''.join(cs.copy()))
                return 

            dval = int(digits[i])
            for j in ml[dval]:
                cs.append(j)
                bt(i + 1)
                cs.pop()

        bt(0)
        return rs