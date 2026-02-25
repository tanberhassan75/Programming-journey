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
        left = right = NULL;
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
void print_level(Node *root, int Level)
{
    if (root == NULL)
    {
        cout << "Invalid";
        return;
    }
    queue<Node *> q;
    q.push(root);
    int lev = 0;
    while (!q.empty())
    {
        int sz = q.size();
        if (lev == Level)
        {
            while (sz--)
            {
                cout << q.front()->val << " ";
                q.pop();
            }
            return;
        }
        for (int i = 0; i < sz; i++)
        {
            Node *p = q.front();
            q.pop();
            if (p->left)
                q.push(p->left);
            if (p->right)
                q.push(p->right);
        }
        lev++;
    }
    cout << "Invalid";
}
int main()
{
    Node *root = input_tree();
    int level;
    cin >> level;
    print_level(root,level);
    return 0;
}