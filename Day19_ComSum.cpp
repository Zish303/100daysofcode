#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void back(vector<int> &can, vector<int> v, int tar)
{
    if (tar == 0)
    {
        ans.push_back(v);
        return;
    }
    if (tar < 0)
    {
        return;
    }
    for (auto &i : can)
    {
        if (v.size() > 0 and v[v.size() - 1] < i)
            continue;
        v.push_back(i);
        back(can, v, tar - i);
        v.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<int> v = {};
    back(candidates, v, target);
    return ans;
}

int main()
{

    return 0;
}