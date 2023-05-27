#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

ListNode *detectCycle(ListNode *head)
{
    ListNode *f = head;
    ListNode *s = head;
    while (f and f->next)
    {
        f = f->next->next;
        s = s->next;
        if (f == s)
        {
            ListNode *en = head;
            while (en != s)
            {
                en = en->next;
                s = s->next;
            }
            return en;
        }
    }
    return NULL;
}

int main()
{

    return 0;
}