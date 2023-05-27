#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int intersectPoint(Node *head1, Node *head2)
{
    auto t1 = head1;
    auto t2 = head2;
    while (t1 != t2)
    {
        if (!t1)
            t1 = head2;
        else
            t1 = t1->next;
        if (!t2)
            t2 = head1;
        else
            t2 = t2->next;
    }
    if (t1)
        return t1->data;
    return -1;
}

int main()
{

    return 0;
}