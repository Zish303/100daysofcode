#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

Node *rev(Node *head)
{
    auto cur = head;
    Node *pre = NULL, *nx = NULL;
    while (cur)
    {
        nx = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nx;
    }
    return pre;
}

Node *addOne(Node *head)
{
    head = rev(head);
    auto temp = head, pre = head;
    int c = 1;
    while (c)
    {
        if (temp)
        {
            temp->data += c;
            c = temp->data / 10;
            temp->data %= 10;
            pre = temp;
            temp = temp->next;
        }
        else
        {
            auto node = new Node(c);
            pre->next = node;
            c = 0;
        }
    }
    return rev(head);
}

int main()
{

    return 0;
}