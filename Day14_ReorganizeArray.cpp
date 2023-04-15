#include <bits/stdc++.h>
using namespace std;

int *Rearrange(int *arr, int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    int a[n];
    for (int i = 0; i < n; i++)
    {
        if (s.count(i))
            a[i] = i;
        else
            a[i] = -1;
    }
    return a;
}

int main()
{
    int a[10] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
    auto a1 = Rearrange(a, 10);
    for (int i = 0; i < 10; i++)
        cout << a1[i] << " ";
    cout << endl;
    return 0;
}