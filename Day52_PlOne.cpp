#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

vector<int> plusOne(vector<int> &digits)
{
    int c = 1;
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        digits[i] += c;
        c = digits[i] / 10;
        digits[i] %= 10;
        if (!c)
            break;
    }
    if (c)
    {
        digits.insert(digits.begin(), c);
    }
    return digits;
}

int main()
{

    return 0;
}