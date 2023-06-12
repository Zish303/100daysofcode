#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int cutRod(int price[], int n)
{
    vector<int> dp(n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            dp[j] = max(dp[j], dp[j - i] + price[i - 1]);
        }
    }
    return dp[n];
}

int main()
{

    return 0;
}