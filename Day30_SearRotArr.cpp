#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int search(int A[], int l, int h, int key)
{
    // l: The starting index
    // h: The ending index, you have to search the key in this range

    if (key > A[0])
    {
        for (int i = l; i <= h; i++)
        {
            if (A[i] == key)
                return i;
        }
    }
    else
    {
        for (int i = h; i >= l; i--)
        {
            if (A[i] == key)
                return i;
        }
    }
    return -1;
}

int main()
{

    return 0;
}