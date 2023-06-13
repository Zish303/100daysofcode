#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int minimumThorns(int n, int m, vector<int> &geek, vector<int> &geekina)
{
    if (abs(geek[0] - geekina[0]) + abs(geek[1] - geekina[1]) == 1)
        return -1;
    int ans1 = 0, ans2 = 0;
    if (geek[0] > 1)
        ans1++;
    if (geek[1] > 1)
        ans1++;
    if (geek[0] < n)
        ans1++;
    if (geek[1] < m)
        ans1++;
    if (geekina[0] > 1)
        ans2++;
    if (geekina[1] > 1)
        ans2++;
    if (geekina[0] < n)
        ans2++;
    if (geekina[1] < m)
        ans2++;
    return min(ans1, ans2);
}

int main()
{

    return 0;
}