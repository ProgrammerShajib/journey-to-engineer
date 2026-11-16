#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *left;
        Node *right;

    Node(int val){
        this->val  = val;
        this->left = NULL;
        this->right = NULL;
    }
    
     
};

void level_Order_traverse(Node* root){
 
 
    if(!root){
        cout << "No tree found.";
        return ;
    }

    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();
        cout << f->val << " ";
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
}

Node* insert_tree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1){
        root = NULL;
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
        Node* myleft, *myRight;
        if(l == -1){
            myleft = NULL;
        }else{
            myleft = new Node(l);
        }

        if(r == -1){
            myRight = NULL;
        }else{
            myRight = new Node(r);
        }

 
        f->left = myleft; 
        f->right = myRight;

        if(f->left){
            q.push(f->left);
        }

        if(f->right){
            q.push(f->right);
        }
    }

    return root;

} 
int  sum(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 0;
    }
    
    int l = sum(root->left);
    int r = sum(root->right);
    return l+r+root->val;
}

vector<int> getleftview(Node* root){
    bool frq[3005] = {false};
    queue<pair<Node*, int>> q;
    if(root){
        q.push({root,1});
    }
    vector<int> v;
    while(!q.empty()){
        pair<Node*, int> pr = q.front();
        q.pop();
        Node* n = pr.first;
        int level = pr.second;

        if(frq[level] == false){
            v.push_back(n->val);
            frq[level] = true;
        }

        if(n->left){
            q.push({n->left, level+1});
        }

        if(n->right){
            q.push({n->right, level+1});
        }
    }
    return v;
}
int main(){

    Node* root;
    root = insert_tree();
 
    int mySum = sum(root);
    cout << mySum;
    
    return 0;
}