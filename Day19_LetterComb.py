def letterCombinations(self, digits: str) -> list[str]:
    if(not len(digits)):
        return []
    m = {
        '2' : "abc",
        '3' : "def",
        '4' : "ghi",
        '5' : "jkl",
        '6' : "mno",
        '7' : "pqrs",
        '8' : "tuv",
        '9' : "wxyz",
    }
    ans = []
    def back(s, s1, m):
        if(s == ""):
            ans.append(s1)
            return
        for c in m[s[0]]:
            back(s[1:], s1+c, m)
    back(digits, "", m)
    return ans