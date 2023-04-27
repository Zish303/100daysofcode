def reverseWords(self,S):
    l = []
    j = 0
    for i in range(1, len(S)):
        if(S[i] == '.'):
            l.append(S[j: i])
            j = i+1
            i += 1
    l.append(S[j:])
    s = ""
    for i in range(len(l)-1, -1, -1):
        s = s + l[i]
        s = s + '.'
    return s[0:-1]