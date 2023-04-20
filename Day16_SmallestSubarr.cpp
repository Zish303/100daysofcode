#include <bits/stdc++.h>
using namespace std;

int smallestSubWithSum(int arr[], int n, int x)
{
    int ans = 1e9, sum = 0;
    int i = 0, j = 0;
    while (j < n)
    {
        while (j < n)
        {
            if (sum > x)
                break;
            sum += arr[j];
            j++;
        }
        while (i <= j)
        {
            if ((sum - arr[i]) > x)
                sum -= arr[i];
            else
            {
                ans = min(ans, (j - i));
                sum -= arr[i];
                i++;
                break;
            }
            i++;
        }
    }
    return ans;
}

int main()
{
    int a[] = {1, 4, 45, 6, 3, 49};
    cout << smallestSubWithSum(a, 6, 51) << endl;
    return 0;
}