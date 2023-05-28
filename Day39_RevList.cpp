#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

ListNode *reverseList(ListNode *head)
{
    auto cur = head, pre = head, nx = head;
    pre = NULL;
    while (cur)
    {
        nx = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nx;
    }
    return pre;
}

int main()
{

    return 0;
}