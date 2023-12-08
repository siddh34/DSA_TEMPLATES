#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

struct heightDiameterPair
{
    int height;
    int diameter;
};


// Input for tree -> 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
Node *buildTree()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }

    Node *n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();

    return n;
}

Node* levelOrderBuild(){

    int d;
    cin >> d;

    Node* root = new Node(d);

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* curr = q.front();
        q.pop();

        int c1, c2;
        cin >> c1 >> c2;

        if(c1 != -1){
            curr->left = new Node(c1);
            q.push(curr->left);
        }
        
        if(c2 != -1){
            curr->right = new Node(c2);
            q.push(curr->right);
        }
    }

    return root;
}

void printPreOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << endl;
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printInOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printInOrder(root->left);
    cout << root->data << endl;
    printInOrder(root->right);
}

void printPostOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << endl;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        if (temp == NULL)
        {
            cout << "\n";
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight, rightHeight) + 1;
}

int diameter(Node* root){
    if(root==NULL){
        return 0;
    }

    int D1 = height(root->left) + height(root->right);
    int D2 = height(root->left);
    int D3 = height(root->right);

    return max(D1, max(D2, D3));
}

heightDiameterPair optimizedDiameter(Node* root){
    heightDiameterPair p;
    
    if(root == NULL){
        p.height = p.diameter = 0;
        return p;
    }

    heightDiameterPair left = optimizedDiameter(root->left);
    heightDiameterPair right = optimizedDiameter(root->right);

    p.height = max(left.height, right.height) + 1;
    int D1 = left.height + right.height;
    int D2 = left.diameter;
    int D3 = right.diameter;

    p.diameter = max(D1, max(D2, D3));
    return p;
}

int main()
{
    // Write your code here
    Node *root = buildTree();
    // Node *root = levelOrderBuild();
    cout << "PreOrder Traversal: " << endl;
    printPreOrder(root);
    cout << "InOrder Traversal: " << endl;
    printInOrder(root);
    cout << "PostOrder Traversal: " << endl;
    printPostOrder(root);
    cout << "Level Order Traversal: " << endl;
    levelOrderTraversal(root);
    cout << "Diameter of the tree: " << diameter(root) << endl;
    cout << "Optimized Diameter of the tree: " << optimizedDiameter(root).diameter << endl;

    return 0;
}