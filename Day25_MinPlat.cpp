#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int findPlatform(int arr[], int dep[], int n)
{
    multimap<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m.insert(pair<int, int>(arr[i], 1));
    }
    for (int i = 0; i < n; i++)
    {
        m.insert(pair<int, int>(dep[i], 2));
    }
    int ans = 1, cnt = 0;
    for (auto &i : m)
    {
        if (i.second == 1)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
        {
            cnt--;
        }
    }
    return ans;
}

int main()
{

    return 0;
}