#include <bits/stdc++.h>
using namespace std;

bool cmp(int x, int y)
{
    string n1 = (to_string(x).append(to_string(y)));
    string n2 = (to_string(y).append(to_string(x)));
    if (n1 > n2)
        return 1;
    else
        return 0;
}

string largestNumber(vector<int> &nums)
{
    string ans = "";
    sort(nums.begin(), nums.end(), cmp);
    for (auto &i : nums)
    {
        ans.append(to_string(i));
    }
    if (ans[0] == '0' and ans[ans.length() - 1] == '0')
        return "0";
    return ans;
}

int main()
{
    vector<int> v = {0, 0};
    cout << largestNumber(v) << endl;
    return 0;
}