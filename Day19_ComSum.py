def combinationSum(self, candidates: list[int], target: int) -> list[list[int]]:
    ans = []
    
    def back(can: list[int], l: list[int], tar):
        if(tar == 0):
            ans.append(l)
            return
        if(tar < 0):
            return
        for i in can:
            if(len(l)>0 and l[-1]<i):
                continue
            l.append(i)
            back(can, l, tar-i)
            l.pop(-1)

    l = []
    back(candidates, l, target)
    return ans