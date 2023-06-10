#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    vector<long long> ans(n);
    stack<long long> s;
    for (int i = n - 1; i >= 0; i--)
    {
        while (1)
        {
            if (s.size() == 0)
            {
                ans[i] = -1;
                break;
            }
            if (s.top() > arr[i])
            {
                ans[i] = s.top();
                break;
            }
            else
                s.pop();
        }
        s.push(arr[i]);
    }
    return ans;
}

int main()
{

    return 0;
}