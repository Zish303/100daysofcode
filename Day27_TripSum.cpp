#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

bool find3Numbers(int A[], int n, int X)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[A[i]] = i;
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (m[X - (A[i] + A[j])] > j)
                return true;
        }
    }
    return false;
}

int main()
{

    return 0;
}