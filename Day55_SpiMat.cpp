#include <bits/stdc++.h>
using namespace std;
ifstream in("input.txt");
ofstream out("out.txt");

vector<int> spirallyTraverse(vector<vector<int>> matrix, int rr, int cc)
{
    int top = 0, bot = rr, l = 0, r = cc;
    vector<int> v;
    while (l < r and top < bot)
    {
        for (int i = l; i < r; i++)
        {
            v.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i < bot; i++)
        {
            v.push_back(matrix[i][r - 1]);
        }
        r--;
        if (top < bot)
        {
            for (int i = r - 1; i >= l; i--)
            {
                v.push_back(matrix[bot - 1][i]);
            }
            bot--;
        }
        if (l < r)
        {
            for (int i = bot - 1; i >= top; i--)
            {
                v.push_back(matrix[i][l]);
            }
            l++;
        }
    }
    return v;
}

int main()
{
    int r, c;
    in >> r >> c;
    vector<int> v(c);
    vector<vector<int>> matrix(r, v);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            in >> matrix[i][j];
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    auto ans = spirallyTraverse(matrix, r, c);
    for (auto &i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}