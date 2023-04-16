#include <bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex)
{
    vector<int> ans = {1};
    if (rowIndex >= 1)
    {
        ans = {1, 1};
    }
    if (rowIndex >= 2)
    {
        for (int j = 2; j <= rowIndex; j++)
        {
            vector<int> v;
            v.push_back(1);
            for (int i = 1; i < ans.size(); i++)
            {
                v.push_back(ans[i] + ans[i - 1]);
            }
            v.push_back(1);
            ans = v;
        }
    }
    return ans;
}

int main()
{
    auto v = getRow(3);
    for (auto &i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}