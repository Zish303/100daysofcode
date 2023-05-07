#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int missingNumber(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    int i = 1;
    while (1)
    {
        if (!s.count(i))
            return i;
        i++;
    }
}

int main()
{

    return 0;
}