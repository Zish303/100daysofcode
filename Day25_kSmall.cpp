#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int kthSmallest(int arr[], int l, int r, int k)
{
    sort(arr, arr + r + 1);
    return arr[k - 1];
}

int main()
{

    return 0;
}