#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

vector<vector<int>> stockBuySell(vector<int> A, int n)
{
    vector<vector<int>> ans;
    int b = 0, s = 0;
    for (int i = 1; i < n; i++)
    {
        if (A[i] > A[s])
            s = i;
        else if (A[i] <= A[s])
        {
            vector<int> v;
            v = {b, s};
            int res = A[s] - A[b];
            if (res > 0)
                ans.push_back(v);
            b = s = i;
        }
    }
    if ((A[s] - A[b]) > 0)
    {
        vector<int> v = {b, s};
        ans.push_back(v);
    }
    return ans;
}

int main()
{

    return 0;
}