#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *head = new ListNode();
    ListNode *temp = head;
    int c = 0;
    while (l1 or l2 or c)
    {
        int n1, n2;
        if (l1)
        {
            n1 = l1->val;
            l1 = l1->next;
        }
        else
            n1 = 0;
        if (l2)
        {
            n2 = l2->val;
            l2 = l2->next;
        }
        else
            n2 = 0;
        int r = n1 + n2 + c;
        c = r / 10;
        r = r % 10;
        ListNode *newn = new ListNode();
        newn->val = r;
        newn->next = nullptr;
        temp->next = newn;
        temp = newn;
    }
    return head->next;
}

int main()
{

    return 0;
}