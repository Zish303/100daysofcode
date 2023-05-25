#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

bool hasCycle(ListNode *head)
{
    auto f = head;
    auto s = head;
    f = (f) ? f->next : NULL;
    f = (f) ? f->next : NULL;
    s = (s) ? s->next : NULL;
    while (f and s)
    {
        if (f and f == s)
            return true;
        f = (f) ? f->next : NULL;
        f = (f) ? f->next : NULL;
        s = (s) ? s->next : NULL;
    }
    return false;
}

int main()
{

    return 0;
}