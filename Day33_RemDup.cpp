#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

ListNode *deleteDuplicates(ListNode *head)
{
    auto pre = head;
    auto temp = (head) ? head->next : nullptr;
    while (temp)
    {
        if (temp->val == pre->val)
        {
            if (temp->next == nullptr)
            {
                pre->next = nullptr;
                break;
            }
            temp = temp->next;
            continue;
        }
        pre->next = temp;
        pre = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{

    return 0;
}