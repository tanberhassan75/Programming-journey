#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int val;
    //Node* prev;
    Node* next;
    Node(int val)
    {
        this->val = val;
        //this->prev = NULL;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
   // newnode->prev = tail;
    tail = newnode;
}
void reverse_using_recurson(Node* &head,Node* tmp,Node* &tail)
{
    if(tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    reverse_using_recurson(head,tmp->next,tail);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
}
void printing_linked_list(Node* head,Node* tail)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    reverse_using_recurson(head,head,tail);
    printing_linked_list(head,tail);
    return 0;
}