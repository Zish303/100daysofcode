#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

Node *sortedMerge(Node *head1, Node *head2)
{
    auto head = new Node(0), temp = head;
    while (head1 or head2)
    {
        int n1 = (head1) ? head1->data : 1e7;
        int n2 = (head2) ? head2->data : 1e7;
        auto node = new Node(0);
        if (n1 <= n2)
        {
            node->data = n1;
            head1 = head1->next;
        }
        else
        {
            node->data = n2;
            head2 = head2->next;
        }
        head->next = node;
        head = node;
    }
    return temp->next;
}

int main()
{

    return 0;
}