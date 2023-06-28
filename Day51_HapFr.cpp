#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int MinCost(int n, int prices[], int dislike[])
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[prices[i]] = dislike[i];
    }
    int c = 0;
    int dis = 0;
    auto it = m.begin();
    c += it->first;
    dis = it->second;
    it++;
    while (it != m.end())
    {
        if (it->second != dis)
        {
            c += it->first;
            return c;
        }
        it++;
    }
    return -1;
}

int main()
{

    return 0;
}