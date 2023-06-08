#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    if (inorder.size() == 0)
        return nullptr;
    int n = postorder[postorder.size() - 1];
    postorder.erase(postorder.end() - 1);
    auto root = new TreeNode(n);
    vector<int> left, right;
    int i = 0;
    while (inorder[i] != n)
        left.push_back(inorder[i]), i++;
    i++;
    while (i < inorder.size())
        right.push_back(inorder[i]), i++;
    root->right = buildTree(right, postorder);
    root->left = buildTree(left, postorder);
    return root;
}

int main()
{

    return 0;
}