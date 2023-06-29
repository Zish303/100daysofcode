#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int removeDuplicates(vector<int> &nums)
{
    set<int> s;
    for (auto i : nums)
    {
        s.insert(i);
    }
    nums.clear();
    for (auto &i : s)
    {
        nums.push_back(i);
    }
    return s.size();
}

int main()
{

    return 0;
}