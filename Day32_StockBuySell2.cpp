#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int stockBuyAndSell(int n, vector<int> &prices)
{
    int ans = 0;
    int b = 0, s = 0;
    for (int i = 1; i < n; i++)
    {
        if (prices[i] > prices[s])
            s = i;
        else if (prices[i] <= prices[s])
        {
            int res = prices[s] - prices[b];
            if (res > 0)
                ans += res;
            b = s = i;
        }
    }
    if ((prices[s] - prices[b]) > 0)
    {
        ans += (prices[s] - prices[b]);
    }
    return ans;
}

int main()
{

    return 0;
}