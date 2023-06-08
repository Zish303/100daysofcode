#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

void removeLoop(Node *head)
{
    auto f = head;
    auto s = head;
    auto pre = head;
    f = (f) ? f->next : NULL;
    f = (f) ? f->next : NULL;
    s = (s) ? s->next : NULL;
    while (f and f != s)
    {
        f = (f) ? f->next : NULL;
        f = (f) ? f->next : NULL;
        pre = s;
        s = (s) ? s->next : NULL;
    }
    if (!f)
        return;
    auto temp = head;
    while (temp != s)
    {
        temp = temp->next;
        pre = s;
        s = s->next;
    }
    pre->next = NULL;
}

int main()
{

    return 0;
}