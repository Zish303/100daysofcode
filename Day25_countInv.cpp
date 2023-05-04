#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

long long merge(long long a[], long long l, long long mid, long long r)
{
    long long ans = 0;
    long long n1 = mid - l + 1, n2 = r - mid;
    long long la[n1], ra[n2];
    for (long long i = 0; i < n1; i++)
    {
        la[i] = a[l + i];
    }

    for (long long i = 0; i < n2; i++)
    {
        ra[i] = a[mid + 1 + i];
    }

    long long i = 0, j = 0, k = l;
    while (i < n1 and j < n2)
    {
        if (la[i] <= ra[j])
        {
            a[k] = la[i];
            i++;
            k++;
        }
        else
        {
            ans += (n1 - i);
            a[k] = ra[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        a[k] = la[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = ra[j];
        j++;
        k++;
    }
    return ans;
}

long long mergeSort(long long a[], long long l, long long r)
{
    long long ans = 0;
    if (l < r)
    {
        long long mid = (l + r) / 2;
        ans += mergeSort(a, l, mid);
        ans += mergeSort(a, mid + 1, r);
        ans += merge(a, l, mid, r);
    }
    return ans;
}

long long inversionCount(long long arr[], long long N)
{
    long long ans = 0;
    ans += mergeSort(arr, 0, N - 1);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    return ans;
}

int main()
{
    long long a[] = {2, 4, 4, 3, 5};
    out << inversionCount(a, 5) << endl;
    return 0;
}