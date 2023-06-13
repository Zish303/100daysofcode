#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int equalPairs(vector<vector<int>> &grid)
{
    int n = grid.size();
    map<vector<int>, int> m;
    // unordered_map<int, vector<int>> m;
    for (int i = 0; i < n; i++)
    {
        m[grid[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> v(n);
        for (int j = 0; j < n; j++)
        {
            v[j] = grid[j][i];
        }
        if (m[v])
            ans++;
    }
    return ans;
}

int main()
{

    return 0;
}