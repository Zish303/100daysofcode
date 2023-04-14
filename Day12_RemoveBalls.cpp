#include <bits/stdc++.h>
using namespace std;

int finLength(int N, vector<int> color, vector<int> radius)
{
    for (int i = 0; i < color.size() - 1; i++)
    {
        if (color[i] == color[i + 1] and radius[i] == radius[i + 1])
        {
            color.erase(color.begin() + i);
            color.erase(color.begin() + i);
            radius.erase(radius.begin() + i);
            radius.erase(radius.begin() + i);
            i -= 2;
        }
    }
    return color.size();
}

int main()
{

    return 0;
}