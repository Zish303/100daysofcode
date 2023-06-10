def productExceptSelf(self, nums, n):
    p = 1
    z = 0
    ans = []
    for i in nums:
        if(i):
            p *= i
        else:
            z += 1
    if(z > 1):
        ans = [0] * n
    else:
        for i in nums:
            if(i):
                if(z):
                    ans.append(0)
                else:
                    ans.append(p // i)
            else:
                if(z - 1):
                    ans.append(0)
                else:
                    ans.append(p)
    return ans