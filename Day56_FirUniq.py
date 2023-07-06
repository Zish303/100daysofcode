def firstUniqChar(s: str) -> int:
    d = {}
    pos = {}
    for i in range(len(s)):
        if s[i] in d:
            d[s[i]] += 1
        else:
            d[s[i]] = 1
            pos[s[i]] = i
    for i in d.items():
        print(i)
        if(i[1] == 1):
            return pos[i[0]]

print(firstUniqChar('zishan'))