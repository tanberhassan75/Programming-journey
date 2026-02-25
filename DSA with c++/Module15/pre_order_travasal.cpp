#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
void in_order(Node* root)
{
    if(root == NULL)
        return;
    cout << root->val <<" ";
    in_order(root->left);
    in_order(root->right);

}
int main()
{
    
    in_order(root);
    return 0;
}