#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

bool isPalindrome(Node *head)
{
    string s = "";
    auto temp = head;
    while (temp)
    {
        s.append(to_string(temp->data));
        temp = temp->next;
    }
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main()
{

    return 0;
}