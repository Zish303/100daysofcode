def quickSort(self,arr,low,high):
    # code here
    if low < high:
        p = Solution().partition(arr, low, high)
        Solution().quickSort(arr, low, p - 1)
        Solution().quickSort(arr, p + 1, high)

def partition(self,arr,low,high):
    # code here
    p = arr[high]
    i = low - 1
    for j in range(low, high):
        if arr[j] <= p:
            i += 1
            (arr[i], arr[j]) = (arr[j], arr[i])
    (arr[i + 1], arr[high]) = (arr[high], arr[i + 1])
    return i + 1