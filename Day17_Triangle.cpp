#include <bits/stdc++.h>
using namespace std;

int minimumTotal(vector<vector<int>> &triangle)
{
    int sz = triangle.size();
    int n = triangle[sz - 1].size();
    int dp[sz][n];
    for (int i = sz - 1; i >= 0; i--)
    {
        int n1 = triangle[i].size();
        for (int j = 0; j < n1; j++)
        {
            if (i == sz - 1)
            {
                dp[i][j] = triangle[i][j];
                continue;
            }
            dp[i][j] = triangle[i][j] + min(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }

    return dp[0][0];
}

int main()
{
    vector<vector<int>> v = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
    cout << minimumTotal(v) << endl;
    return 0;
}