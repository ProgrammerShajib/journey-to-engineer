#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *left;
        Node *right;
    
    Node(int val){
        this->val = val;
        this->left= NULL;
        this->right= NULL;
    }
};

// void Preorder(Node* tree){
//     if(tree == 0){
//         return ;
//     }
//     cout << tree->val  << " ";
//     Preorder(tree->left);
//     Preorder(tree->right);
// }

void level_Order(Node* root){
    queue<Node*> q;
    if(root)
        q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        cout << f->val << " ";
        q.pop();

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}
int main(){

    Node* tree = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    
    tree->left = a;
    tree->right = b;
    a->left = c;
    b->left =d;
    b->right = e;
    // Preorder(tree);
    level_Order(tree);

    return 0;
}