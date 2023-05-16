#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

vector<int> findTwoElement(vector<int> arr, int n)
{
    vector<int> ans;
    long long sum = 0;
    long long exp = (long long)n * (n + 1) / 2;
    unordered_map<int, int> m;
    int rep;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        m[arr[i]]++;
        if (m[arr[i]] > 1)
            rep = arr[i];
    }
    int mis = rep - (sum - exp);
    ans.push_back(rep);
    ans.push_back(mis);
    return ans;
}

int main()
{

    return 0;
}