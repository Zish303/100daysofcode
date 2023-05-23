#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

ListNode *partition(ListNode *head, int x)
{
    ListNode *left = new ListNode(0, nullptr), *right = new ListNode(0, nullptr);
    auto *ltail = left, *rtail = right;
    while (head)
    {
        auto newn = new ListNode(head->val, nullptr);
        if (head->val < x)
        {
            ltail->next = newn;
            ltail = ltail->next;
        }
        else
        {
            rtail->next = newn;
            rtail = rtail->next;
        }
        head = head->next;
    }
    ltail->next = right->next;
    return left->next;
}

int main()
{

    return 0;
}