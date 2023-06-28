def maxDepth(self,root):
    if(root == None):
        return 0
    return max(Solution().maxDepth(root.left), Solution().maxDepth(root.right)) + 1