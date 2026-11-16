#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node* right;
    
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

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

void level_Order_Print(Node *root){

    if(!root) {
        cout << "No Tree.";
        return ;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* f = q.front();
        q.pop();
        cout << f->val <<" ";
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }

}

int size(Node* root){

    int count = 0;
    if(root == NULL){
        return 0;
    }
    int l = size(root->left);
    int r = size(root->right);
    count = l+r+1;
    return count;
}
void Pre_Order_print(Node* root){
    if(!root){
        // cout << "No Tree.";
        return ;
    }

    cout << root->val << " ";
    Pre_Order_print(root->left);
    Pre_Order_print(root->right);
}
int main(){
    Node* root = input_tree();
    level_Order_Print(root);
    cout << endl;
    // Pre_Order_print(root);

    int s = size(root);
    cout << s;
    
    return 0;
}