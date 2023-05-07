#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

vector<int> binaryArray(int n, vector<int> &arr)
{
    vector<int> ans;
    int sum = accumulate(arr.begin(), arr.end(), 0);
    for (auto &i : arr)
    {
        if ((sum - i) % 2)
            ans.push_back(0);
        else
            ans.push_back(1);
    }
    return ans;
}

int main()
{

    return 0;
}