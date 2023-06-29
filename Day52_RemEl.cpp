#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int removeElement(vector<int> &nums, int val)
{
    vector<int> v;
    for (auto &i : nums)
    {
        if (i != val)
            v.push_back(i);
    }
    nums = v;
    return v.size();
}

int main()
{

    return 0;
}