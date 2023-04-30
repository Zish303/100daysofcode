#include <bits/stdc++.h>
using namespace std;

int isWinner(vector<int> &player1, vector<int> &player2)
{
    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < player1.size(); i++)
    {
        sum1 += player1[i];
        if (i > 1 and (player1[i - 2] == 10 or player1[i - 1] == 10))
            sum1 += player1[i];
        else if (i > 0 and player1[i - 1] == 10)
            sum1 += player1[i];
    }
    for (int i = 0; i < player2.size(); i++)
    {
        sum2 += player2[i];
        if (i > 1 and (player2[i - 2] == 10 or player2[i - 1] == 10))
            sum2 += player2[i];
        else if (i > 0 and player2[i - 1] == 10)
            sum2 += player2[i];
    }
    if (sum1 > sum2)
        return 1;
    if (sum1 < sum2)
        return 2;
    return 0;
}

int main()
{

    return 0;
}