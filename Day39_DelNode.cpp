#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

void deleteNode(ListNode *node)
{
    while (node->next and node->next->next)
    {
        node->val = node->next->val;
        node = node->next;
    }
    node->val = node->next->val;
    node->next = NULL;
}

int main()
{
    
    return 0;
}