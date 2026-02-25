#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
int size(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
void print_forward(Node *head)
{
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void print_backward(Node *tail)
{
    cout << "R -> ";
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void insert_at_position(Node *&head, Node *&tail, int idx, int val)
{
    if (idx == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;

    while (t--)
    {
        int x, v;
        cin >> x >> v;
        int sz = size(head);
        if (x < 0 || x > sz)
            cout << "Invalid" << endl;
        else
        {
            if (x == sz)
            {
                insert_at_tail(head, tail, v);
            }
            else
            {
                insert_at_position(head, tail, x, v);
            }

            print_forward(head);
            print_backward(tail);
        }
    }
    return 0;
}
