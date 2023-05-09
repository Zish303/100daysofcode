#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *head = new ListNode();
    ListNode *temp = head;
    while (list1 or list2)
    {
        int n1, n2;
        if (list1)
        {
            n1 = list1->val;
        }
        else
            n1 = 1e9;
        if (list2)
        {
            n2 = list2->val;
        }
        else
            n2 = 1e9;
        int r;
        if (n1 <= n2)
        {
            r = n1;
            list1 = list1->next;
        }
        else
        {
            r = n2;
            list2 = list2->next;
        }
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