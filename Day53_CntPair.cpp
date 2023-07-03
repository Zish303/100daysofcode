#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int getPairsCount(int arr[], int n, int k)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    int ans = 0;
    for (auto &i : m)
    {
        if (m[k - i.first] > 0)
        {
            if (i.first == (k - i.first))
            {
                int temp = m[i.first];
                ans += temp * (temp - 1) / 2;
                m.erase(i.first);
            }
            else
            {
                ans += (m[i.first] * m[k - i.first]);
                m.erase(k - i.first);
            }
        }
    }
    return ans;
}

int main()
{

    return 0;
}