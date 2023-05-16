#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

long long trappingWater(int arr[], int n)
{
    // code here
    long long ans = 0;
    vector<int> pre(n), suf(n);
    pre[0] = arr[0];
    suf[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        pre[i] = max(pre[i - 1], arr[i]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = max(suf[i + 1], arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        ans += min(pre[i], suf[i]) - arr[i];
    }
    return ans;
}

int main()
{

    return 0;
}