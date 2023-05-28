#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    auto f = head;
    auto s = head;
    n--;
    while (n--)
    {
        f = f->next;
    }
    auto pre = head;
    pre = NULL;
    while (f->next)
    {
        f = f->next;
        pre = s;
        s = s->next;
    }
    if (pre)
        pre->next = s->next;
    else
        head = s->next;
    return head;
}

int main()
{

    return 0;
}