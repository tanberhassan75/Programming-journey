#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    // root set
    int val;
    cin >> val;
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root); // queue root push
    while (!q.empty())
    {
        // ber kore ana
        Node *f = q.front();
        q.pop();
        // oi node niye kaj
        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);
        f->left = myleft;
        f->right = myright;
        // children push
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
void count_node(Node *root)
{
    if (root == NULL)
        return;
    if (root->left)
    {
        count_node(root->left);
    }
    else if (root->right)
    {
        count_node(root->right);
    }
    cout << root->val << " ";
}
void count_nodes(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    if (root->right)
    {
        count_nodes(root->right);
    }
    else if (root->left)
    {
        count_nodes(root->left);
    }
}
int main()
{
    Node *root = input_tree();
    count_node(root->left);
    cout << root->val << " ";
    count_nodes(root->right);
    return 0;
}