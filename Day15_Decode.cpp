#include <bits/stdc++.h>
using namespace std;

int numDecodings(string s)
{
    int n = s.length();
    int dp[n + 1];
    dp[n] = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            dp[i] = 0;
            continue;
        }
        if (i == n - 1)
        {
            dp[i] = 1;
            continue;
        }
        int n = stoi(s.substr(i, 2));
        if (n >= 1 and n <= 26)
        {
            dp[i] = dp[i + 1] + dp[i + 2];
        }
        else
            dp[i] = dp[i + 1];
    }
    return dp[0];
}

int main()
{
    cout << numDecodings("128") << endl;
    return 0;
}