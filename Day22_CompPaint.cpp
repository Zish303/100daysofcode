#include <bits/stdc++.h>
using namespace std;

int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
{
    int mm = mat.size();
    int nn = mat[0].size();
    map<int, pair<int, int>> m;
    for (int i = 0; i < mm; i++)
    {
        for (int j = 0; j < nn; j++)
        {
            m[mat[i][j]].first = i;
            m[mat[i][j]].second = j;
        }
    }
    vector<int> row(mm);
    vector<int> col(nn);
    for (int i = 0; i < arr.size(); i++)
    {
        int in1 = m[arr[i]].first;
        int in2 = m[arr[i]].second;
        row[in1]++;
        col[in2]++;
        if (row[in1] == nn or col[in2] == mm)
            return i;
    }
    return arr.size() - 1;
}

int main()
{

    return 0;
}