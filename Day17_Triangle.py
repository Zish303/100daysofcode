def minimumTotal(self, triangle: list[list[int]]) -> int:
    sz = len(triangle)
    n = len(triangle[sz-1])
    dp = [0 * n] * sz
    for i in range(sz-1, -1, -1):
        n1 = len(triangle[i])
        for j in range(n1):
            if(i == (sz-1)):
                dp[i][j] = triangle[i][j]
                continue
            dp[i][j] = triangle[i][j] + min(dp[i+1][j], dp[i+1][j+1])

    return dp[0][0]