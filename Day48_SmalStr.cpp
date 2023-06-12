#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

string smallestString(string s)
{
    int i = 0;
    int n = s.length();
    bool f = 1;
    while (i < n and s[i] == 'a')
        i++;
    while (i < n and s[i] != 'a')
    {
        s[i]--;
        f = 0;
        i++;
    }
    if (f)
        s[n - 1] = 'z';
    return s;
}

int main()
{

    return 0;
}