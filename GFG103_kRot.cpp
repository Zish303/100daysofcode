#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

string kPeriodic(string s, int K)
{
    map<char, int> m;

    for (int i = 0; i < s.size(); i++)
        m[s[i]]++;

    int n = s.size();
    int val = n / __gcd(n, K);

    for (auto t : m)
    {
        if (t.second % val)
            return "-1";
    }

    string f = "";

    for (auto t : m)
    {
        int fre = t.second / val;
        while (fre--)
            f += t.first;
    }
    string ans = "";
    while (val--)
        ans += f;

    return ans;
}

int main()
{
    string s = "abba";
    int k = 2;
    cout << kPeriodic(s, k) << endl;
    return 0;
}