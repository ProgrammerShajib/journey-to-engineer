#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left, *right;
    Node(int val)
    {
        this->val = val;
        this->left = this->right = NULL;
    }
};

void left_Side(Node *root)
{
    if (!root){
        return;
    }

    if (root->left)
    {
        left_Side(root->left);
    }
    else if (root->right)
    {
        left_Side(root->right);
    }

    cout << root->val << " ";
}

void right_side(Node *root)
{
    if (!root){

        return;
    }

    cout << root->val << " ";

    if (root->right)
    {
        right_side(root->right);
    }
    else if (root->left)
    {
        right_side(root->left);
    }
}

Node* input_tree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1){
        root= NULL;
    }else{
        
        root = new Node(val);
    }

    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* my_left, * my_right;
        if(l == -1){
            my_left = NULL;
        }else{
            my_left = new Node(l);
        }
        if(r == -1){
            my_right = NULL;
        }else{
            my_right = new Node(r);
        }

        f->left = my_left;
        f->right = my_right;

        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }

    }
    return root;
}

int main()
{
    Node *root = input_tree();
    if (!root)
        return 0;

    if (root->left)
    {
        left_Side(root);
        if (root->right){

            right_side(root->right);
        }
    }
    else
    {

        right_side(root);
    }

    return 0;
}