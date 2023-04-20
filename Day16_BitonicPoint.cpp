#include <bits/stdc++.h>
using namespace std;

int findMaximum(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mx)
        {
            return mx;
        }
        else
            mx = arr[i];
    }
    return mx;
}

int main()
{

    return 0;
}