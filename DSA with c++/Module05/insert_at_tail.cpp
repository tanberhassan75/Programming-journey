#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_Head(Node* &Head, int val)
{
    Node* first = new Node(val);
    first->next=Head;
    Head=first;
}
void insert_at_tail(Node* &Head, int vall)
{
    Node* tail = new Node(vall);
    if(Head == NULL)
    {
        Head=tail;
        return;
    }
    Node* temp = Head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next=tail;
}
void printing(Node* Head)
{
    Node* temp = Head;
    while(temp!=NULL)
    {
        cout << temp->val<<endl;
        temp = temp->next;
    }
}
int main()
{
    Node* Head = NULL; //new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(30);
    // Head->next=a;
    // a->next=b;
    // insert_at_tail(Head,200);
    // insert_at_tail(Head,300);
    insert_at_tail(Head,400);
    printing(Head);

    return 0;
}