#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

ListNode *swapPairs(ListNode *head)
{
    auto pre = head;
    auto cur = head;
    auto prev = head;
    cur = (head != nullptr) ? head->next : nullptr;
    if (cur)
    {
        pre->next = cur->next;
        cur->next = pre;
        head = cur;
        prev = pre;
        pre = pre->next;
        cur = (pre != nullptr) ? pre->next : nullptr;
    }

    while (cur != nullptr)
    {
        pre->next = cur->next;
        cur->next = pre;
        prev->next = cur;
        prev = pre;
        pre = pre->next;
        cur = (pre != nullptr) ? pre->next : nullptr;
    }
    return head;
}

int main()
{

    return 0;
}