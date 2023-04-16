#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    if (numRows >= 1)
    {
        vector<int> v = {1};
        ans.push_back(v);
    }
    if (numRows >= 2)
    {
        vector<int> v = {1, 1};
        ans.push_back(v);
    }
    if (numRows >= 3)
    {
        for (int i = 3; i <= numRows; i++)
        {
            vector<int> v;
            v.push_back(1);
            for (int j = 0; j < ans[i - 2].size() - 1; j++)
            {
                v.push_back(ans[i - 2][j] + ans[i - 2][j + 1]);
            }
            v.push_back(1);
            ans.push_back(v);
        }
    }
    return ans;
}

int main()
{
    auto v = generate(5);
    for (auto &i : v)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}