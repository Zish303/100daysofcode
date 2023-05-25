#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

struct Node *reverseList(struct Node *head)
{
    if (head == NULL or head->next == NULL)
        return head;
    auto rest = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}

int main()
{

    return 0;
}