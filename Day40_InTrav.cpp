#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> v;
    if (root)
    {
        auto v1 = inorderTraversal(root->left);
        v.insert(v.end(), v1.begin(), v1.end());
        v.push_back(root->val);
        v1 = inorderTraversal(root->right);
        v.insert(v.end(), v1.begin(), v1.end());
    }
    return v;
}

int main()
{

    return 0;
}