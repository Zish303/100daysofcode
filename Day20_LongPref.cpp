#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(string arr[], int N)
{
    string ans = "";
    for (int i = 0; i < arr[0].length(); i++)
    {
        char temp = arr[0][i];
        bool f = 1;
        for (int j = 1; j < N; j++)
        {
            if (i < arr[j].length())
            {
                if (temp != arr[j][i])
                {
                    f = 0;
                    break;
                }
            }
            else
            {
                f = 0;
                break;
            }
        }
        if (f)
            ans = ans + temp;
    }
    if (ans == "")
        return "-1";
    return ans;
}

int main()
{

    return 0;
}