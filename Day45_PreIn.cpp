#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    if (inorder.size() == 0)
        return nullptr;
    int n = preorder[0];
    preorder.erase(preorder.begin());
    auto root = new TreeNode(n);
    vector<int> left, right;
    int i = 0;
    while (inorder[i] != n)
        left.push_back(inorder[i]), i++;
    i++;
    while (i < inorder.size())
        right.push_back(inorder[i]), i++;
    root->left = buildTree(preorder, left);
    root->right = buildTree(preorder, right);
    return root;
}

int main()
{

    return 0;
}