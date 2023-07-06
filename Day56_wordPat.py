def wordPattern(pattern: str, s: str) -> bool:
        l = list(s.split(' '))
        dic1 = {}
        dic2 = {}
        dic1[pattern[0]] = l[0]
        dic2[l[0]] = pattern[0]
        print(s.split(' '))
        if(len(l) != len(pattern)):
             return False
        for i in range(1, len(l)):
            if pattern[i] in dic1:
                if(l[i] != dic1[pattern[i]]):
                    return False
            elif l[i] in dic2:
                if(pattern[i] != dic2[l[i]]):
                    return False
            else:
                dic1[pattern[i]] = l[i]
                dic2[l[i]] = pattern[i]
        return True

print(wordPattern('abba', "dog cat cat dog"))