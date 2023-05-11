#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

string isSubset(int a1[], int a2[], int n, int m)
{
    unordered_map<int, int> mm;
    for (int i = 0; i < n; i++)
    {
        mm[a1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        if (!mm[a2[i]])
            return "No";
        mm[a2[i]]--;
    }
    return "Yes";
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a1[n], a2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }
    cout << isSubset(a1, a2, n, m) << endl;
    return 0;
}