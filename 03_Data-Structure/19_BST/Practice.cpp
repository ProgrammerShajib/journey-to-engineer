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

// making tree with all value
Node* input_tree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1){
        root = NULL;
    }else{
        root = new Node(val);
    }

    queue<Node*> q;
    if(root){
        q.push(root);
    }

    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* my_left, *my_right;
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

// travers the tree
void level_order_traversal(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    if(root)
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

bool binary_search_tree(Node* root, int val){
    if(root == NULL){
        return false;
    }

    if(root->val == val){
        return true;
    }

    if(val < root->val){
        return binary_search_tree(root->left, val); 
        
    }
    if(val > root->val){
        return binary_search_tree(root->right, val); 
        
    }
  
}

void insert_value(Node* &root, int val){
    if(root == NULL){
        root = new Node(val);
        return ;
    }

    if(val < root->val){
        // go to left
        if(root->left == NULL){
            root->left = new Node(val);
            return;
        }else{
            insert_value(root->left, val);
        }
    }
    if(val > root->val){
        // right
        if(root->right){
            root->right = new Node(val);
            return ;
        }else{
            insert_value(root->right, val);
        }

    }
}


// Convert Array to bst
Node* Array_to_bst(int ar[], int l , int r){

    if(l>r){
        return NULL;
    }
    int mid = (l+r)/2;
    Node* root = new Node(ar[mid]);
    Node* left_node = Array_to_bst(ar, l, mid-1);
    Node* right_node = Array_to_bst(ar,mid+1, r);
    root->left = left_node;
    root->right = right_node;
    return root;

}

int main(){

    // Node*  root = input_tree();

    // level_order_traversal(root);
    // int val ;
    // cin >> val;
    // bool result = binary_search_tree(root, val);
    // if(result){
    //     cout << "Yes found the value";
    // }else{
    //     cout << "Not found the value";
    // }
    int n;
    cin >> n;
    int ar[n];
    for(int i =0;i<n;i++){
        int val;
        cin >> val;
        ar[i] = val;
    }
 
    Node* root = Array_to_bst(ar, 0, n-1);
    level_order_traversal(root);
    
    return 0;
}
