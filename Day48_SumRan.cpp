#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

vector<string> summaryRanges(vector<int> &nums)
{
    vector<string> ans;
    int n = nums.size();
    if (!n)
        return ans;
    int l = nums[0], r = nums[0];
    for (int i = 1; i < n; i++)
    {
        r = nums[i];
        if ((nums[i] - nums[i - 1]) > 1)
        {
            if (l == nums[i - 1])
                ans.push_back(to_string(l));
            else
                ans.push_back(to_string(l) + "->" + to_string(nums[i - 1]));
            l = r;
        }
    }
    if (l == nums[n - 1])
        ans.push_back(to_string(l));
    else
        ans.push_back(to_string(l) + "->" + to_string(nums[n - 1]));
    return ans;
}

int main()
{

    return 0;
}