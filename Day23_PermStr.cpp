#include <bits/stdc++.h>
using namespace std;
ifstream in("input.txt");
ofstream out("output.txt");

vector<string> find_permutation(string S)
{
    vector<string> v;
    sort(S.begin(), S.end());
    do
    {
        v.push_back(S);
    } while (next_permutation(S.begin(), S.end()));
    return v;
}

int main()
{

    return 0;
}