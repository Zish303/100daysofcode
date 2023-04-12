#include <bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size)
{
    map<int, int> m;
    for (int i = 0; i < size; i++)
    {
        m[a[i]]++;
        if (m[a[i]] > (size / 2))
            return a[i];
    }
    return -1;
}

int main()
{
    int a[] = {3, 1, 3, 3, 2};
    cout << majorityElement(a, 5) << endl;
    return 0;
}