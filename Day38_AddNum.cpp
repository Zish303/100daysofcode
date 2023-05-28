#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

struct Node *reverse(struct Node *head)
{
    Node *cur = head;
    Node *pre = NULL, *nx = NULL;

    while (cur != NULL)
    {
        nx = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nx;
    }
    return pre;
}

struct Node *addTwoLists(struct Node *first, struct Node *second)
{
    first = reverse(first);
    second = reverse(second);
    Node *head = new Node(0);
    auto temp = head;
    int c = 0;
    while (first or second or c)
    {
        int n1, n2;
        if (first)
        {
            n1 = first->data;
            first = first->next;
        }
        else
            n1 = 0;
        if (second)
        {
            n2 = second->data;
            second = second->next;
        }
        else
            n2 = 0;
        int res = n1 + n2 + c;
        c = res / 10;
        res %= 10;
        Node *newn = new Node(res);
        temp->next = newn;
        temp = newn;
    }
    head = reverse(head->next);
    return head;
}

int main()
{

    return 0;
}