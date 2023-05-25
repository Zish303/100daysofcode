#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int getMiddle(Node *head)
{
    auto f = head;
    auto s = head;
    while (f and f->next)
    {
        s = s->next;
        f = f->next;
        f = f->next;
    }
    return s->data;
}

int main()
{

    return 0;
}