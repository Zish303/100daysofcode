def smallestString(s: str) -> str:
    i = 0
    n = len(s)
    f = True
    while(i < n and s[i] == 'a'):
        i += 1
    while(i < n and s[i] != 'a'):
        s = s[:i] + chr(ord(s[i])-1) + s[i+1:]
        f = False
        i += 1
    if(f):
        s = s[:-1] + 'z'
    return s

print(smallestString("aaaaa"))