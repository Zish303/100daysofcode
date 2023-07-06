#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int maxIndexDiff(int arr[], int n)
{
    int ans = 0;
    for (int j = n - 1; j >= 0; j--)
    {
        if (j < (n - 1) and arr[j] >= arr[j + 1])
            continue;
        if (j < ans)
            break;
        for (int i = 0; i <= j; i++)
        {
            if ((j - i) < ans)
                break;
            if (arr[i] <= arr[j])
            {
                ans = j - i;
                break;
            }
        }
    }
    return ans;
}

int main()
{

    return 0;
}