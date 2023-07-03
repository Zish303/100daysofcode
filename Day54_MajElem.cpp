#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int majorityElement(vector<int> &nums)
{
    unordered_map<int, int> m;
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        m[nums[i]]++;
        if (m[nums[i]] > (size / 2))
            return nums[i];
    }
    return -1;
}

int main()
{

    return 0;
}