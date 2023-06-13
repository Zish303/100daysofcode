#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

vector<int> kLargest(int arr[], int n, int k)
{
    priority_queue<int> q;
    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
    }
    vector<int> v;
    for (int i = 0; i < 2; i++)
    {
        v.push_back(q.top());
        q.pop();
    }
    return v;
}

int main()
{

    return 0;
}