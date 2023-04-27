def longestPalin(self, S):
    ans = ""
    def palin(s):
        i = 0
        j = len(s) - 1
        while(i <= j):
            if(s[i] != s[j]):
                return False
            i += 1
            j -= 1
        return True

    for i in range(len(S)):
        if((len(S)-i) < len(ans)):
            break
        for j in range(i+1, len(S)):
            if(S[i] == S[j]):
                s1 = S[i:j+1]
                if(palin(s1) and len(s1) > len(ans)):
                    ans = s1
    if(ans == ""):
        return S[0]
    return ans