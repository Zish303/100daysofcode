#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

int getNthFromLast(Node *head, int n)
{
    int c = 0;
    auto temp = head;
    while (temp)
    {
        c++;
        temp = temp->next;
    }
    int pos = c - n;
    if(pos<0)return -1;
    temp = head;
    while (pos--)
    {
        temp = temp->next;
    }
    return temp->data;
}

int main()
{

    return 0;
}