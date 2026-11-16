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

Node* insert_Tree()
{
    int first_val;
    cin >> first_val;
    Node *root;
    if(first_val == -1) root = NULL;
    else root = new Node(first_val);
    
    queue<Node *> q;
    if(root) q.push(root);

    while (!q.empty())
    {

        // node ber kore ana
        Node *p = q.front();
        q.pop();
        
        // Oi node niye kaj kora
        int r, l;
        cin >> l >> r;
        Node *my_left, *my_right;
        if (l == -1)
            my_left = NULL;
        else
            my_left = new Node(l);
        if (r == -1)
            my_right = NULL;
        else
            my_right = new Node(r);


        // oi node e children push kora
        p->left = my_left;
        p->right = my_right;

        // push the children in the queue also
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }

    return root;
}

void level_order_traversal(Node* root){

    if(root == NULL) {
        cout << "No Tree.";
        return;
    }
 
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        // take the value from the queue
        Node* f = q.front();        
        // Now work with that node
        cout << f->val << " ";
        q.pop();

        // push the left and right node in queue
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
}

int main()
{

    Node* root = insert_Tree();
    level_order_traversal(root);
    return 0;
}