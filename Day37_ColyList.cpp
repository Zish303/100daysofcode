#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

Node *copyRandomList(Node *head)
{
    unordered_map<Node *, Node *> m;
    auto *hd = new Node(0);
    auto tl = hd;
    while (head)
    {
        auto *newn = new Node(head->val);
        m[newn] = head;
        m[head] = newn;
        tl->next = newn;
        tl = newn;
        head = head->next;
    }
    auto temp = hd;
    while (temp)
    {
        temp->random = m[m[temp]->random];
    }
    return hd;
}

int main()
{

    return 0;
}
