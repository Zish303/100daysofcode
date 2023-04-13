#include <bits/stdc++.h>
using namespace std;

bool wordBreak(string s, vector<string> &wordDict, map<int, int> m = {})
{
    m[s.length()] = 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        for (auto &ws : wordDict)
        {
            if (i + ws.length() <= s.length())
            {
                if (s.substr(i, ws.length()) == ws)
                {
                    m[i] = m[i + ws.length()];
                }
                if (m[i])
                    break;
            }
        }
    }
    return m[0];
}

int main()
{
    string s = "applepenapple";
    vector<string> wordDict = {"apple", "pen"};
    cout << wordBreak(s, wordDict) << endl;
    return 0;
}