#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int> &A, int n)
{
    map<int, int> m;
    m[A[0]] = 1;
    int sum = A[0], ans = 0;
    if (sum == 0 and A.size() == 1)
        return 1;
    for (int i = 1; i < n; i++)
    {
        sum += A[i];
        if (sum == 0)
        {
            ans = max(ans, i + 1);
        }
        if (!m[sum])
            m[sum] = i + 1;
        else
        {
            ans = max(ans, (i - m[sum] + 1));
        }
    }
    return ans;
}

int main()
{

    return 0;
}