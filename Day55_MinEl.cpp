#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

class Solution
{
    map<int, int> m;
    stack<int> s;

public:
    /*returns min element from stack*/
    int getMin()
    {
        if (s.size())
            return m.begin()->first;
        return -1;
    }

    /*returns poped element from stack*/
    int pop()
    {
        if (s.size())
        {
            int temp = s.top();
            s.pop();
            if (temp == m.begin()->first)
            {
                if (m[temp] > 1)
                    m[temp]--;
                else if (m[temp] == 1)
                    m.erase(temp);
            }
            return temp;
        }
        return -1;
    }

    /*push element x into the stack*/
    void push(int x)
    {
        m[x]++;
        s.push(x);
    }
};

int main()
{

    return 0;
}