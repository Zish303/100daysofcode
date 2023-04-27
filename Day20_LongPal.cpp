#include <bits/stdc++.h>
using namespace std;

string ans = "";

bool palin(string s)
{
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

string longestPalin(string S)
{
    for (int i = 0; i < S.length(); i++)
    {
        if ((S.length() - i) < ans.length())
            break;
        for (int j = i + 1; j < S.length(); j++)
        {
            if (S[i] == S[j])
            {
                string s1 = S.substr(i, j - i + 1);
                if (palin(s1) and s1.length() > ans.length())
                    ans = s1;
            }
        }
    }
    if (ans == "")
        return S.substr(0, 1);
    return ans;
}

int main()
{
    cout << longestPalin("aaaaaa") << endl;
    return 0;
}