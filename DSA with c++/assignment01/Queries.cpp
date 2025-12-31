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
void insert_at_Head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}
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
void delete_any_pos(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
        return;
    if (idx == 0)
    {
        Node *deletenode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete deletenode;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        if (temp->next == NULL)
        {
            return;
        }
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        return;
    }
    Node *deletenode = temp->next;
    temp->next = deletenode->next;

    if (deletenode == tail)
    {
        tail = temp;
    }

    delete deletenode;
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
    int t;
    cin >> t;
    int x;
    int val;
    while (t--)
    {
        cin >> x;
        cin >> val;
        if (x == 0)
        {
            insert_at_Head(head, tail, val);
            printing(head);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, val);
            printing(head);
        }
        else if (x == 2)
        {
            delete_any_pos(head, tail, val);
            printing(head);
        }
    }
    return 0;
}