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

void Preorder(Node* tree){
    if(tree == 0){
        return ;
    }
    cout << tree->val  << " ";
    Preorder(tree->left);
    Preorder(tree->right);
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
    Preorder(tree);
    return 0;
}