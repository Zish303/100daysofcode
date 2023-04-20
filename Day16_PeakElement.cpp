#include <bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i > 0 and arr[i] < arr[i - 1])
            continue;
        if (i < n - 1 and arr[i] < arr[i + 1])
            continue;
        return i;
    }
}

int main()
{

    return 0;
}