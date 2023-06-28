#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int nBlocks(int w)
{
    int ans = 0;
    while (w)
    {
        if (w % 2)
            ans++;
        w /= 2;
    }
    return ans;
}

int main()
{

    return 0;
}