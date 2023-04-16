def getRow(self, rowIndex: int) -> list[int]:
    ans = [1]
    if(rowIndex >= 1):
        ans = [1, 1]
    if(rowIndex >= 2):
        for j in range(2, rowIndex + 1):
            l = []
            l.append(1)
            for i in range(1, len(ans)):
                l.append(ans[i] + ans[i-1])
            l.append(1)
            ans = l
    return ans