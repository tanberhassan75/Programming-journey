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
void remove_duplicate(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        Node *rmp = tmp;
        Node *jmp = tmp->next;
        while (jmp != NULL)
        {
            if (tmp->val == jmp->val)
            {
                rmp->next = jmp->next;
                if (jmp == tail)
                {
                    tail = rmp;
                }
                delete jmp;
                jmp = rmp->next;
            }
            else
            {
                rmp = jmp;
                jmp = jmp->next;
            }
        }
    }
}
void printing(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
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
    remove_duplicate(head, tail);
    printing(head);
    return 0;
}