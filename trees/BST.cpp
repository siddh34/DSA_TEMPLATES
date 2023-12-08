#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            data = d;
            left = right = NULL;
        }
};

Node *insert(Node *root, int data){
    if(root == NULL) return new Node(data);

    if(data <= root->data) root->left = insert(root->left, data);
    else root->right = insert(root->right, data);

    return root;
}

void printInorder(Node *root){
    if(root == NULL) return;

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

bool search(Node *root, int data){
    if(root == NULL) return false;

    if(root->data == data) return true;
    else if(data < root->left->data) return search(root->left, data);

    return search(root->right, data);
}

Node *remove(Node *root, int data){
    if(root == NULL) return root;

    if(data < root->data) root->left = remove(root->left, data);
    else if(data > root->data) root->right = remove(root->right, data);
    else{
        if(root->left == NULL and root->right == NULL){
            delete root;
            return NULL;
        }
        else if(root->left == NULL){
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL){
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        else{
            Node *temp = root->right;
            while(temp->left != NULL) temp = temp->left;
            root->data = temp->data;
            root->right = remove(root->right, temp->data);        }
    }
    return root;
}

int main() {
    //Write your code here
    Node *root = NULL;
    int arr[] = {8, 3, 1, 6, 4, 7, 10, 14, 13};

    for(int i = 0; i < 9; i++){
        root = insert(root, arr[i]);
    }

    // removal code testing
    // cout << "Original Tree: ";
    // printInorder(root);
    // root = remove(root, 1);
    // cout << "After removal, the Tree: ";
    // printInorder(root);

    return 0;
}