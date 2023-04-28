#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')')
        {
            if (i <= 0 or s[i - 1] != '(')
                return false;
            s.erase(s.begin() + i - 1);
            s.erase(s.begin() + i - 1);
            i -= 2;
        }
        else if (s[i] == '}')
        {
            if (i <= 0 or s[i - 1] != '{')
                return false;
            s.erase(s.begin() + i - 1);
            s.erase(s.begin() + i - 1);
            i -= 2;
        }
        else if (s[i] == ']')
        {
            if (i <= 0 or s[i - 1] != '[')
                return false;
            s.erase(s.begin() + i - 1);
            s.erase(s.begin() + i - 1);
            i -= 2;
        }
    }
    if (s == "")
        return true;
    return false;
}

int main()
{

    return 0;
}