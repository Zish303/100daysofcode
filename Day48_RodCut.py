def cutRod(price, n):
    dp = [0] * (n+1)
    for i in range(1, n+1):
        for j in range(i, n+1):
            dp[j] = max(dp[j], dp[j-i] + price[i-1])
    return dp[n]


p = [3, 5, 8, 9, 10, 17, 17, 20]
n = 8
print(cutRod(p, n))