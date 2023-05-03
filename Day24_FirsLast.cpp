#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

vector<int> searchRange(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            vector<int> v(2);
            int mid1 = mid;
            mid1++;
            while (mid1 < nums.size() and nums[mid1] == target)
                mid1++;
            v[1] = mid1 - 1;
            mid--;
            while (mid >= 0 and nums[mid] == target)
                mid--;
            v[0] = mid + 1;
            return v;
        }
        else if (nums[mid] < target)
        {
            l = mid + 1;
        }
        else if (nums[mid] > target)
        {
            r = mid - 1;
        }
    }
    vector<int> v = {-1, -1};
    return v;
}

int main()
{

    return 0;
}