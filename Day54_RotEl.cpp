#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

void rotate(vector<int> &nums, int k)
{
    vector<int> v = nums;
    int i = 0;
    k %= nums.size();
    for (int j = nums.size() - k; j < nums.size(); j++)
    {
        nums[i] = v[j];
        i++;
    }
    for (int j = 0; j < nums.size() - k; j++)
    {
        nums[i] = v[j];
        i++;
    }
}

int main()
{

    return 0;
}