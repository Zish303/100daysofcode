#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> ans;
    unordered_set<int> s;
    int i = 0, j = 0, k = 0;
    for (int i = 0; i < n1; i++)
    {
        while (j < n2 and B[j] < A[i])
            j++;
        if (B[j] != A[i])
            continue;
        while (k < n3 and C[k] < A[i])
            k++;
        if (C[k] != A[i])
            continue;
        if (!s.count(A[i]))
        {
            ans.push_back(A[i]);
            s.insert(A[i]);
        }
    }
    return ans;
}

int main()
{

    return 0;
}