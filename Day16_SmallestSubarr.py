def smallestSubWithSum(self, a, n, x):
    ans = 1e9
    sum = 0
    i = 0
    j = 0
    while(j < n):
        while(j < n):
            if(sum > x):
                break
            sum += a[j]
            j += 1
        while(i <= j):
            if((sum-a[i]) > x):
                sum -= a[i]
            else:
                ans = min(ans, (j-i))
                sum -= a[i]
                i += 1
                break
            i += 1
    return ans