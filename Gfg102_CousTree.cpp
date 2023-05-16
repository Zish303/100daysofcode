#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int findCousinSum(Node *root, int key)
{
    if (root == NULL)
        return -1;
    int ans = 0;
    Node *lt = root->left;
    Node *rt = root->right;
    if (lt and rt)
    {
        if ((lt->left and lt->left->data == key) or (lt->right and lt->right->data == key))
        {
            if (rt->left)
                ans += rt->left->data;
            if (rt->right)
                ans += rt->right->data;
        }
        else if ((rt->left and rt->left->data == key) or (rt->right and rt->right->data == key))
        {
            if (lt->left)
                ans += lt->left->data;
            if (lt->right)
                ans += lt->right->data;
        }
    }
    if (ans <= 0 and lt)
    {
        ans = findCousinSum(lt, key);
    }
    if (ans <= 0 and rt)
    {
        ans = findCousinSum(rt, key);
    }
    if (ans <= 0)
        return -1;
    return ans;
}

int main()
{

    return 0;
}