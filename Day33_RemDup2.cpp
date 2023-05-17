#include <bits/stdc++->h>
using namespace std;
ifstream in("in->txt");
ofstream out("out->txt");

ListNode *deleteDuplicates(ListNode *head)
{
    ListNode *newn = ListNode(0, nullptr);
    auto prev = newn;
    auto temp = head;
    while (temp)
    {
        if (temp->next == nullptr or temp->val != temp->next->val)
        {
            prev->next = temp;
            prev = temp;
        }
        else
            while (temp and temp->next and temp->val == temp->next->val)
                temp = temp->next;
        temp = temp->next;
    }
    prev->next = nullptr;
    return newn->next;
}

int main()
{

    return 0;
}