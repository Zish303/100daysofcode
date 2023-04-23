#include <bits/stdc++.h>
using namespace std;

int minimumNumber(int n, vector<int> &arr)
{
    int g = __gcd(arr[0], arr[1]);
    for (int i = 2; i < n; i++)
    {
        g = __gcd(g, arr[i]);
    }
    return g;
}

int main()
{

    return 0;
}