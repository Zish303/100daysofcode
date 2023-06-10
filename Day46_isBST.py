def isBST(self, root):
    def check(root, l, r):
        if(not root):
            return True
        if(not(root.data > l and root.data < r)):
            return False
        return check(root.left, l, root.data) and check(root.right, root.data , r)
    return check(root, -1e9, 1e9)