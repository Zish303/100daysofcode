#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int maxVowels(string s, int k)
{
    vector<int> v;
    for (auto &i : s)
    {
        if (i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u')
            v.push_back(1);
        else
            v.push_back(0);
    }
    int ans = 0, c = 0;
    for (int i = 0; i < k; i++)
    {
        c += v[i];
    }
    ans = c;
    for (int i = k; i < s.length(); i++)
    {
        c += v[i];
        c -= v[i - k];
        ans = max(ans, c);
    }
    return ans;
}

int main()
{

    return 0;
}