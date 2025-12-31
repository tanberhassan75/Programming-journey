#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this ->val = val;
        this->next = NULL;
    }
};
int main() 
{
    Node* Head = new Node(10);
    Node* b = new Node(20);
    Node*c = new Node(30);
    (*Head).next=b;
    b->next = c;
    cout << Head->next->next->val << endl;

    return 0;
}