#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

void rotateArr(int arr[], int d, int n)
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = arr[i];
    }
    for (int i = 0; i < n - d; i++)
    {
        arr[i] = a[i + d];
    }
    for (int i = n - d; i < n; i++)
    {
        arr[i] = a[i - (n - d)];
    }
}

int main()
{

    return 0;
}