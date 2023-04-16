def generate(self, numRows: int) -> list[list[int]]:
    ans = []
    if(numRows >= 1):
        l = [1]
        ans.append(l)
    if(numRows >= 2):
        l = [1, 1]
        ans.append(l)
    if(numRows >= 3):
        for i in range(2, numRows):
            l = []
            l.append(1)
            for j in range(len(ans[i-1])-1):
                l.append(ans[i-1][j] + ans[i-1][j+1])
            l.append(1)
            ans.append(l)
    return ans