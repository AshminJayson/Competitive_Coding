#This problem was on the neetcode list and I found a test bench on lintcode but they wanted me to join some 
#banned china chat application

#Also the solution looked totally not worth the time, so I'm gonna skip on that

#just for reference

def encode(strlist):
    rt = ""
    for i in strlist:
        rt += len(i) + '#' + i
    return rt


def decode(string):
    rt = []
    while i < len(string):
        j = i
        while string[j] != '#':
            j += 1
        
        length = int(string[i:j])
        rt.append(string[j+1:length+j+1])
        i = j + 1 + length
    return rt

#I actually take that back, this problem is actually pretty good 😂