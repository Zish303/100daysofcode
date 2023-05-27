#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

Node *removeDuplicates(Node *head)
{
    auto pre = head;
    auto temp = head;
    temp = (temp) ? temp->next : NULL;
    while (temp)
    {
        if (temp->data == pre->data)
        {
            pre->next = temp->next;
            temp = pre->next;
        }
        else
        {
            pre = pre->next;
            temp = temp->next;
        }
    }
    return head;
}

int main()
{

    return 0;
}