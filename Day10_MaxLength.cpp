#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int c)
{
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);
    reverse(arr, arr + 3);
    if ((arr[0] - 2) <= 2 * (arr[1] + arr[2]))
        return (a + b + c);
    return -1;
}

int main()
{
    cout << solve(3, 3, 3) << endl;
    return 0;
}