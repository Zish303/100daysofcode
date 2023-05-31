#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (p == nullptr or q == nullptr)
    {
        return (p == q);
    }
    if (p->val != q->val)
        return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main()
{

    return 0;
}