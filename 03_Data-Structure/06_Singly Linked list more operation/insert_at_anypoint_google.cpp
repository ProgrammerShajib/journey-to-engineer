#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Helper to get current size
int getSize(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_At_anypoint(Node* &head, Node* &tail, int pos, int val) {
    int size = getSize(head);

    // 1. Check for Invalid Index
    if (pos < 0 || pos > size) {
        cout << "Invalid" << endl;
        return;
    }

    Node* newNode = new Node(val);

    // 2. Case: Insert at Head (Index 0)
    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        if (tail == NULL) tail = newNode; // If list was empty
    } 
    // 3. Case: Insert at Tail or Middle
    else {
        Node* temp = head;
        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        
        // If we inserted at the very end, update the tail
        if (newNode->next == NULL) {
            tail = newNode;
        }
    }
    
    // Print list after every valid insertion
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL, *tail = NULL;
    int x;

    // Initial List Input
    while (cin >> x && x != -1) {
        insert_at_tail(head, tail, x);
    }

    int q;
    cin >> q;
    while (q--) {
        int pos, val;
        cin >> pos >> val;
        insert_At_anypoint(head, tail, pos, val);
    }

    return 0;
}