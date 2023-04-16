def numDecodings(self, s: str) -> int:
    n = len(s)
    dp = [0] * (n+1)
    dp[n] = 1
    for i in range(n-1, -1, -1):
        if(s[i] == '0'):
            dp[i] = 0
            continue
        if(i == n-1):
            dp[i] = 1
            continue
        n = (int)(s[i:i+2])
        if(n >= 1 and n <= 26):
            dp[i] = dp[i+1] + dp[i+2]
        else:
            dp[i] = dp[i+1]
    return dp[0]