def longestCommonPrefix(self, arr, n):
    ans = ""
    for i in range(len(arr[0])):
        temp = arr[0][i]
        f = 1
        for j in range(1, n):
            if(i<len(arr[j])):
                if(temp != arr[j][i]):
                    f = 0
                    break
            else:
                f = 0
                break
        if(f == 1):
            ans = ans + temp
    if(ans == ""):
        return "-1"
    return ans