#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int countTriplet(int arr[], int n)
{
    sort(arr, arr + n);
    int c = 0;
    for (int i = n - 1; i >= 2; i--)
    {
        int f = 0, r = i - 1;
        while (f < r)
        {
            if ((arr[f] + arr[r]) == arr[i])
            {
                c++;
                f++;
                r--;
            }
            else if ((arr[f] + arr[r]) < arr[i])
                f++;
            else
                r--;
        }
    }
    return c;
}

int main()
{

    return 0;
}