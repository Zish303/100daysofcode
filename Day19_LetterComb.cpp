#include <bits/stdc++.h>
using namespace std;

vector<string> ans;
void back(string s, string s1, map<char, string> m)
{
    if (s == "")
    {
        ans.push_back(s1);
        return;
    }
    for (auto &c : m[s[0]])
    {
        string s2 = s;
        s2.erase(s2.begin());
        back(s2, s1 + c, m);
    }
}

vector<string> letterCombinations(string digits)
{
    if (digits.length() == 0)
    {
        vector<string> v = {};
        return v;
    }
    map<char, string> m;
    m['2'] = "abc";
    m['3'] = "def";
    m['4'] = "ghi";
    m['5'] = "jkl";
    m['6'] = "mno";
    m['7'] = "pqrs";
    m['8'] = "tuv";
    m['9'] = "wxyz";
    back(digits, "", m);
    return ans;
}

int main()
{

    return 0;
}