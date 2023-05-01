#include <bits/stdc++.h>
using namespace std;
ifstream in("input.txt");
ofstream out("output.txt");

long long toh(int N, int from, int to, int aux)
{
    if (N <= 0)
    {
        return 0;
    }
    long long ans = 0;
    if (N > 1)
    {
        ans += toh(N - 1, from, aux, to);
    }

    cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
    ans++;

    if (N > 1)
    {
        ans += toh(N - 1, aux, to, from);
    }
    return ans;
}

int main()
{
    out << toh(2, 1, 3, 2);
    return 0;
}