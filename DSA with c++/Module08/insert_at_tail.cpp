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
void printing_forword(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;

}
int main()
{
    Node *head = NULL;
    // Node *a = new Node(20);
    Node *tail = NULL;
    // head->next = a;

    // a->prev = head;
    // a->next = tail;

    // tail->prev = a;
    insert_at_tail(head,tail,100);
    insert_at_tail(head,tail,200);
    printing_forword(head);
    return 0;
}