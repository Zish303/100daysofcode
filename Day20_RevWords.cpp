#include <bits/stdc++.h>
using namespace std;

string reverseWords(string S)
{
    vector<string> v;
    int j = 0;
    for (int i = 1; i < S.length(); i++)
    {
        if (S[i] == '.')
        {
            v.push_back(S.substr(j, i - j));
            j = i + 1;
            i++;
        }
    }
    v.push_back(S.substr(j, S.length() - j));
    string s = "";
    for (int i = v.size() - 1; i >= 0; i--)
    {
        s.append(v[i]);
        s.append(".");
    }
    s.erase(s.end() - 1);
    return s;
}

int main()
{

    return 0;
}