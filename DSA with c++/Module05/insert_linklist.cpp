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
void insert_at_head(Node* &Head, int val)
{
    Node* first = new Node(val);
    first->next=Head;
    Head=first;
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
    Node* a = new Node(20);
    Node* b = new Node(30);
    Head->next=a;
    a->next=b;
    insert_at_head(Head,100);
    printing(Head);

    return 0;
}