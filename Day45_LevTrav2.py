def levelOrderBottom(self, root: Optional[TreeNode]) -> List[List[int]]:
    ans = []
    l = [root] if(root) else []
    while(len(l)):
        n = len(l)
        l1 = []
        for i in range(n):
            node = l.pop(0)
            if(node):
                l1.append(node.val)
                l.append(node.left)
                l.append(node.right)
        if(len(l1)):
            ans.append(l1)

    return ans[::-1]