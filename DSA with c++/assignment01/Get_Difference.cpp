#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    Node *temp = tail;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void max_val(Node *head)
{
    Node *tmp = head;
    Node *rmp = head;
    long long int max = tmp->val;
    while (tmp != NULL)
    {
        if (tmp->val > max)
            max = tmp->val;
        tmp = tmp->next;
    }
    long long int min = rmp->val;
    while (rmp != NULL)
    {
        if (rmp->val < min)
            min = rmp->val;
        rmp = rmp->next;
    }
    long long int val = max - min;
    cout << val << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    max_val(head);

    return 0;
}