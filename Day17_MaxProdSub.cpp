#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int ans = *max_element(nums.begin(), nums.end()), p = 1;
    for (int i = 0; i < nums.size(); i++)
    {

        p *= nums[i];
        ans = max(ans, p);
        if (p == 0)
            p = 1;
    }
    p = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {

        p *= nums[i];
        ans = max(ans, p);
        if (p == 0)
            p = 1;
    }
    return ans;
}

int main()
{

    return 0;
}