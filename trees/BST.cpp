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

int main() {
    //Write your code here
    Node *root = NULL;
    int arr[] = {8, 3, 1, 6, 4, 7, 10, 14, 13};

    for(int i = 0; i < 9; i++){
        root = insert(root, arr[i]);
    }

    printInorder(root);

    return 0;
}