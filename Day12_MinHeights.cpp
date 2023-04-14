#include <bits/stdc++.h>
using namespace std;

int equilibriumPoint(long long a[], int n)
{
    long long fir = 0, sec = 0;
    for (int i = 0; i < n; i++)
    {
        sec += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sec -= a[i];
        if (i > 0)
            fir += a[i - 1];
        if (fir == sec)
            return i + 1;
    }
    return -1;
}

int main()
{
    long long a[] = {1};
    cout << equilibriumPoint(a, 1) << endl;
    return 0;
}