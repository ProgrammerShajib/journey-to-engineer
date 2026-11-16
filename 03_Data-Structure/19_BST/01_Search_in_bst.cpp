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

// Input in tree
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *my_left, *my_right;
        if (l == -1)
        {
            my_left = NULL;
        }
        else
        {
            my_left = new Node(l);
        }

        if (r == -1)
        {
            my_right = NULL;
        }
        else
        {
            my_right = new Node(r);
        }

        f->left = my_left;
        f->right = my_right;

        if (f->left)
            q.push(my_left);
        if (f->right)
            q.push(f->right);
    }

    return root;
}
void print_tree(Node *root)
{
    if (!root)
    {
        return;
    }

    cout << root->val << " ";
    print_tree(root->left);
    print_tree(root->right);
}

void level_order_print(Node *root)
{
    if (!root)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        cout << f->val << " ";
        q.pop();

        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
}
bool binary_search_tree(Node *root, int val)
{
    if(root == NULL){
        return false;
    }

    if(root->val == val){
        return true;
    }

    if(root->val > val){
        return binary_search_tree(root->left, val);
    }

    if(root->val < val){
        return binary_search_tree(root->right, val);
    }
}

int main()
{

    Node* root = input_tree();
    level_order_print(root);
    cout << endl;
    print_tree(root); 
    cout << endl;
    bool result =  binary_search_tree(root, -25);
    cout << result << " ";

    if(result)
        cout << "Present";
    else
        cout << "Not Present";
    return 0;
}