#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

bool isPalindrome(string s)
{
    int i = 0, j = s.length();
    while (i <= j)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
            ;
        else if (s[i] >= '0' and s[i] <= '9')
            ;
        else if (s[i] >= 'A' and s[i] <= 'Z')
            s[i] = (char)(s[i] + ('a' - 'A'));
        else
        {
            i++;
            continue;
        }

        if (s[j] >= 'a' and s[j] <= 'z')
            ;
        else if (s[j] >= '0' and s[j] <= '9')
            ;
        else if (s[j] >= 'A' and s[j] <= 'Z')
            s[j] = (char)(s[j] + ('a' - 'A'));
        else
        {
            j--;
            continue;
        }

        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }

    return true;
}

int main()
{

    cout << (char)('A' + ('a' - 'A')) << endl;
    return 0;
}