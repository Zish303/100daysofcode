#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

long long minimumBuckets(int N, vector<int> &arr)
{
    long long sum = 0;
    int g = arr[0];
    for (int i = 1; i < N; i++)
    {
        g = __gcd(arr[i], g);
    }
    for (auto i : arr)
    {
        sum += ceil(i / g);
    }
    return sum;
}

int main()
{

    return 0;
}