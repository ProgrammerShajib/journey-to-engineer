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

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    // if(root->left == NULL && root->right == NULL){
    //     return 1;
    // }

    int l = height(root->left);
    int r = height(root->right);

    return max(l,r) + 1;

}
void allNode(Node* root, int &cnt){
    if(root == NULL){
        return ;
    }
    cnt++;

    allNode(root->left, cnt);
    allNode(root->right, cnt);    

}

 
int main(){
    Node* root = input_tree();
    int cnt =0;
    int h = height(root);
    allNode(root, cnt);
    // cout << h << " " << cnt;
    int total = pow(2,h) - 1 ;
    if(total == cnt){
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    }

    return 0;
}