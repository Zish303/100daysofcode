#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    unordered_map<ListNode *, int> m;
    while (headA)
    {
        m[headA]++;
        headA = headA->next;
    }
    while (headB)
    {
        if (m[headB])
            return headB;
        headB = headB->next;
    }
    return NULL;
}

int main()
{

    return 0;
}