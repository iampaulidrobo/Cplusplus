#include<iostream>
#include<queue>
using namespace std;
    // Inorder traversal is often used for binary search trees to get nodes in sorted order.

    // Preorder traversal is useful for creating a copy of the tree.

    // Postorder traversal is commonly used in expression trees to evaluate expressions.

    // Level order traversal is helpful for finding the shortest path between nodes.



void printInorder(struct Node* node)
{
    if (node == NULL)
        return;

    // First recur on left child
    printInorder(node->left);

    // Then print the data of node
    cout << node->data << " ";

    // Now recur on right child
    printInorder(node->right);
}
// Time Complexity: O(N)
// Auxiliary Space: If we don’t consider the size of the stack for function calls then O(1) otherwise O(h) where h is the height of the tree.
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;

    // First print data of node
    cout << node->data << " ";

    // Then recur on left subtree
    printPreorder(node->left);

    // Now recur on right subtree
    printPreorder(node->right);
}
//Time Complexity: O(N)
//Auxiliary Space: If we don’t consider the size of the stack for function calls then O(1) otherwise O(h) where h is the height of the tree. 
void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;

    // First recur on left subtree
    printPostorder(node->left);

    // Then recur on right subtree
    printPostorder(node->right);

    // Now deal with the node
    cout << node->data << " ";
}
void printLevelOrder(Node* root)
{
    // Base Case
    if (root == NULL)
        return;

    // Create an empty queue for level order traversal
    queue<Node*> q;

    // Enqueue Root and initialize height
    q.push(root);

    while (q.empty() == false) {

        // Print front of queue and remove it from queue
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();

        // Enqueue left child
        if (node->left != NULL)
            q.push(node->left);

        // Enqueue right child
        if (node->right != NULL)
            q.push(node->right);
    }
}