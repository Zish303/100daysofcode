def maxVowels(self, s: str, k: int) -> int:
    l = []
    for c in s:
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'):
            l.append(1)
        else:
            l.append(0)
    ans = 0
    c = 0
    for i in range(k):
        c += l[i]
    
    ans = c

    for i in range(k, len(s)):
        c += l[i]
        c -= l[i-k]
        ans = max(ans, c)
    return ans