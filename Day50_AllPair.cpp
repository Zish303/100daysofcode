#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
{
    unordered_map<int, int> m;
    vector<pair<int, int>> ans;
    for (int i = 0; i < N; i++)
    {
        m[A[i]]++;
    }
    for (int i = 0; i < M; i++)
    {
        if (m[X - B[i]])
        {
            pair<int, int> p;
            p.first(X - B[i]);
            p.second = B[i];
            ans.push_back(p);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{

    return 0;
}