def peakElement(self,arr, n):
    for i in range(n):
        if(i>0 and arr[i]<arr[i-1]):
            continue
        if(i<n-1 and arr[i]<arr[i+1]):
            continue
        return i