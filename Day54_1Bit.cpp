#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int hammingWeight(uint32_t n)
{
    int ans = 0;
    while (n)
    {
        if (n % 2)
            ans++;
        n /= 2;
    }
    return ans;
}

int main()
{

    return 0;
}