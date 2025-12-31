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
void insert_at_tail(Node* &Head,Node* &tail, int vall)
{
    Node* newnode = new Node(vall);
    if(Head == NULL)
    {
        Head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail = tail->next;// newnode
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
    Node* Head = new Node(10);
    Node* tail = new Node(20);
    Head->next=tail;
    insert_at_tail(Head,tail,200);
    insert_at_tail(Head,tail,300);
    insert_at_tail(Head,tail,400);
    printing(Head);

    return 0;
}