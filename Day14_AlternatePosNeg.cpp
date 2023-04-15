#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            neg.push_back(arr[i]);
        else
            pos.push_back(arr[i]);
    }
    int k = 0;
    int i = 0, j = 0;
    while (i < pos.size() and j < neg.size())
    {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }
    while (i < pos.size())
    {
        arr[k++] = pos[i++];
    }
    while (j < neg.size())
    {
        arr[k++] = neg[j++];
    }
}

int main()
{
    int a[10] = {93, 85, -59, 45, -89, -41, -4, -98, 79, -12};
    rearrange(a, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}