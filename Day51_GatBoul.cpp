#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

long long MinCost(int n, int weightsArr[])
{
    long long ans = INFINITY;
    for (int i = 0; i < n; i++)
    {
        long long sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += weightsArr[j] * abs(i - j);
            if (sum >= ans)
                break;
        }
        ans = min(ans, sum);
    }
    return ans;
}

int main()
{

    return 0;
}