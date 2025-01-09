#include <iostream>

using namespace std;

/* Trees : - Used in OS to organize files, and folder structures
           - Basic unit of a tree is a node, Node are connected to other nodes
           through edges/branches.
           - Shows hierarchy of nodes through parent - child r/ships
           - children nodes cannot be connected
           - First node aka root node; a node without a parent
           - Leaf node aka leaf node; a node without any children
    Binary: Each parent can only have 2 children nodes  

Depth-first (DFS); Prioritizes depth search first
    - Types of algorithms; Pre-order, Inorder, Post order
        - Preorder (data, left, right) - get/manipulate data, go to left child, get data, then left, right
        - Inorder (left, data, right) - get left til leaf node, manipulate data, then go to right child 
        - Post order(left, right, data)
Breadth-first (BFS); Prioritizes width search
*/

struct Node
{
    int data;
    Node* left;
    Node* right;
};

// create node function
Node* createNode(int data) {
    Node* newNode = new Node(); // creating a new node
    newNode->data = data; // set value for the node
    newNode->left = newNode->right = nullptr; //initially setting the child nodes to be a nullptr
    return newNode;
}   

// pre-order depth algorithm; uses a recursive algorithm
// void printTree(Node* root) {
//     if (root == nullptr) // base case to control the termination of recursive functions
//         return;
    
//     cout << root->data << endl; // manipulate data
//     printTree(root->left); // visit left
//     printTree(root->right);    // visit right
// }

// Inorder algorithm
// void printTree(Node* root) {
//     if (root == nullptr) // base case to control the termination of recursive functions
//         return;

//     printTree(root->left); // visit left
//     cout << root->data << endl; // manipulate data
//     printTree(root->right);    // visit right
// }

// post order algorithm
void printTree(Node* root) {
    if (root == nullptr) // base case to control the termination of recursive functions
        return;

    printTree(root->left); // visit left
    printTree(root->right);    // visit right
    cout << root->data << endl; // manipulate data
}

int main() {

    Node* rootNode = createNode(1);

    // adding child nodes L1
    rootNode->left = createNode(2);
    rootNode->right = createNode(3);

    // adding child nodes L2
    rootNode->left->left = createNode(4);
    rootNode->left->right = createNode(5);
    rootNode->right->left = createNode(6);
    rootNode->right->right = createNode(7);

    // adding child nodes L4
    rootNode->left->right->left = createNode(9);
    rootNode->right->right->left = createNode(15);

    printTree(rootNode);

    return 0;
}