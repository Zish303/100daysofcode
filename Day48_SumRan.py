def summaryRanges(nums: list[int]) -> list[str]:
    if(not len(nums)):
        return []
    ans = []
    l = nums[0]
    r = nums[0]
    for i in range(1, len(nums)):
        r = nums[i]
        if(nums[i] - nums[i-1] > 1):
            if(l == nums[i-1]):
                ans.append(str(l))
            else:
                ans.append(str(l) + '->' + str(nums[i-1]))
            l = r
    if(l == nums[-1]):
        ans.append(str(l))
    else:
        ans.append(str(l) + '->' + str(nums[-1]))
    return ans

print(summaryRanges([0,1,2,4,5,7]))