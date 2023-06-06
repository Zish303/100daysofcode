def isValidBST(self, root: Optional[TreeNode]) -> bool:
    def check(root, left, right):
        if(not root):
            return True
        if(not (root.val > left and root.val < right)):
            return False
        return check(root.left, left, root.val) and check(root.right, root.val, right)
    return check(root, -1e10, 1e10)