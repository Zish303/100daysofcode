#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int numTrees(int n, map<int, int> m = {})
{
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int temp = 0;
        for (int j = 0; j < i; j++)
        {
            temp += (dp[j] * dp[i - 1 - j]);
        }
        dp[i] = temp;
    }
    return dp[n];
}

int main()
{

    return 0;
}