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
int count_node(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l + r + 1;
}
int max_depth(Node *root)
{
    if (root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL);
    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node *root = input_tree();
    int depth = max_depth(root);
    int sz = count_node(root);
    int tol = 1;
    for (int i = 0; i < depth; i++)
    {
        tol *= 2;
    }
    tol -= 1;
    if (sz == tol)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}