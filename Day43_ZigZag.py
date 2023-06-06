def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
    ans = []
    l = [root] if(root) else []
    f = False
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
            if(f):
                ans.append(l1[::-1])
            else:
                ans.append(l1)
            f = not f

    return ans