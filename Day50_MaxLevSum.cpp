#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int maxLevelSum(TreeNode *root)
{
    queue<TreeNode *> qu;
    qu.push(root);
    int mx = -1e9, ans = 1, level = 0;
    while (!qu.empty())
    {
        level++;
        int n = qu.size();
        int sum = 0;
        while (n--)
        {
            auto temp = qu.front();
            qu.pop();
            if (temp->left)
                qu.push(temp->left);
            if (temp->right)
                qu.push(temp->right);
            sum += temp->val;
        }
        if (sum > mx)
        {
            mx = sum;
            ans = level;
        }
    }
    return ans;
}

int main()
{

    return 0;
}