#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{
    int n = nums.size();
    bool dp[n];
    dp[0] = true;
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        bool f = true;
        while (j >= 0)
        {
            if (j + nums[j] >= i)
            {
                if (dp[j])
                {
                    dp[i] = true;
                    f = false;
                    break;
                }
            }
            j--;
        }
        if (f)
            dp[i] = false;
    }
    return dp[n - 1];
}

int main()
{

    return 0;
}