def kPeriodic(s, K):
    s = sorted(s)
    n = len(s)
    l = [0] * 26
    for c in s:
        l[ord(c) - ord('a')] += 1
    siz = 0
    idd = 0
    ans = "_" * n
    while(ans[idd] == "_"):
        siz += 1
        # ans[id] = '.'
        ans = ans[:idd] + '.' + ans[idd+1:]
        idd += K
        idd %= n
    
    for i in l:
        if(i % siz != 0):
            return "-1"
    ans = "_" * n
    idd = 0
    c = 0
    v = 0
    while(c != n):
        while(ans[idd] != "_"):
            idd += 1
        while(l[v] == 0):
            v += 1
        while(ans[idd] == '_'):
            c += 1
            ans = ans[:idd] + chr(ord('a') + v) + ans[idd+1:]
            idd += K
            idd %= n
        l[v] -= siz
    return ans

print(kPeriodic("abbab", 2))