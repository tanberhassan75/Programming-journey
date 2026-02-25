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
Node* input_tree()
{
    // root set
    int val;
    cin >> val;
    Node* root = new Node(val);
    queue<Node*>q;
    q.push(root); // queue root push
    while(!q.empty())
    {
        // ber kore ana
        Node* f = q.front();
        q.pop();
        // oi node niye kaj
        int l,r;
        cin >> l >> r;
        Node* myleft,*myright;
        if(l == -1) myleft = NULL;
        else myleft = new Node(l);
        if(r == -1) myright = NULL;
        else myright = new Node(r);
        f->left = myleft;
        f->right = myright;
        // children push
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}
int count_node(Node* root)
{
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 1;
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l+r;

}
int main()
{
    Node* root = input_tree();
    cout << count_node(root);
    
    return 0;
}