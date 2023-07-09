from heapq import heapify, heappop
class Solution:
    def largestVariance(self, s: str) -> int:

        # Naive substring generation with counting
        # maxVar = 0


        # for i in range(len(s)):
        #     l = [0] * 26
        #     for j in range(i, len(s)):
        #         l[ord(s[j]) - 97] += 1
        #         k = [f for f in l if f != 0]
        #         k.sort()

        #         if len(k) >= 2:
        #             maxVar = max(maxVar, k[-1] - k[0])

        # return maxVar


        #Distinct pair counting
        #Not accepted due to TLE

        maxVar = 0

        ch = [0] * 26
        for i in s:
            ch[ord(i) - 97] += 1

        for i in range(26):
            for j in range(26):
                if i == j or ch[i] == 0 or ch[j] == 0: continue

                a, b = chr(97 + i), chr(97 + j)

                cs = 0
                l = [0] * len(s)

                
                flag2 = False
                for k in range(len(s)):
                    item = 0
                    if s[k] == a: item = 1
                    elif s[k] == b: item = -1

                    if 0 > cs + item:
                        flag2 = False
                    elif item == -1:
                        flag2 = True
                    
                    cs = max(cs + item, 0)
                    if flag2: maxVar = max(maxVar, cs)
                    else: maxVar = max(maxVar, cs - 1)

        return maxVar


# Python converted to C++ and then accepted
# class Solution {
# public:
#     int largestVariance(string s) {
#     int maxVar = 0;
#     vector<int> ch(26, 0);
    
#     for (char i : s) {
#         ch[i - 'a'] += 1;
#     }
    
#     for (int i = 0; i < 26; i++) {
#         for (int j = 0; j < 26; j++) {
#             if (i == j || ch[i] == 0 || ch[j] == 0)
#                 continue;
            
#             char a = 'a' + i;
#             char b = 'a' + j;
            
#             int cs = 0;
#             vector<int> l(s.length(), 0);
            
#             bool flag2 = false;
#             for (int k = 0; k < s.length(); k++) {
#                 int item = 0;
#                 if (s[k] == a)
#                     item = 1;
#                 else if (s[k] == b)
#                     item = -1;
                
#                 if (cs + item < 0)
#                     flag2 = false;
#                 else if (item == -1)
#                     flag2 = true;
                
#                 cs = max(cs + item, 0);
#                 if (flag2)
#                     maxVar = max(maxVar, cs);
#                 else
#                     maxVar = max(maxVar, cs - 1);
#             }
#         }
#     }
    
#         return maxVar;
#     }
# };