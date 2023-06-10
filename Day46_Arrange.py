def Rearrange(self, n : int, arr : List[int]) -> None:
    l1 = []
    l2 = []
    for i in arr:
        if(i < 0):
            l1.append(i)
        else:
            l2.append(i)
    k = 0
    for i in l1:
        arr[k] = i
        k += 1
    for i in l2:
        arr[k] = i
        k += 1
    