def findMaximum(self,arr, n):
    mx = arr[0]
    for i in range(1, n):
        if(arr[i] < mx):
            return mx
        mx = arr[i]
    return mx