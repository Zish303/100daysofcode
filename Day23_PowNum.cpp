#include <bits/stdc++.h>
using namespace std;
ifstream in("input.txt");
ofstream out("output.txt");

long long power(int N, int R)
{
    int p = 1;
    int mod = 1000000007;
    long long ans = 1;
    while (R--)
    {
        ans = (ans * N) % mod;
    }
    return ans;
}

int main()
{
    cout << power(12, 21) << endl;
    return 0;
}