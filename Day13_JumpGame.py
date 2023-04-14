def canJump(self, nums: list[int]) -> bool:
    n = len(nums)
    dp = [False] * n
    dp[0] = True
    for i in range(1, n):
        for j in range(i-1, -1, -1):
            if(j + nums[j] >= i):
                if(dp[j] == True):
                    dp[i] = True
                    break
    return dp[n-1]