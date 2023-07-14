class Solution:
    def simplifyPath(self, path: str) -> str:
        

        #Naive Solution
        # st = []
        # path += '/'
        # for i in path:
        #     # print(st, i)
        #     if i != '/': st.append(i)
        #     else:
        #         stk = ''
        #         k = len(st) - 1
        #         while k >= 0 and st[k] != '/':
        #             stk += st[k]
        #             k -= 1
        #         if stk == '.':
        #             st.pop()
        #         elif stk == '..':
        #             while st and st[-1] != '/': st.pop()
        #             if len(st) != 1: st.pop()
        #             while st and st[-1] != '/' and len(st) != 1: st.pop()
        #         elif stk == '' and len(st) != 0: pass
        #         else:
        #             st.append('/')

        # if len(st) > 1 and st[-1] == '/': st.pop()
        
        # return ''.join(st)

        #Slicing
        pathlist = path.split('/')
        print(pathlist)
        stringer = []
        for i in pathlist:
            if i == '..':
                if stringer: stringer.pop()
                else: pass
            elif i == '.' or i == '/' or i == '': pass
            else: stringer.append(i)

        return '/' + '/'.join(stringer)





