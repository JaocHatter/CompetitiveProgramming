/*#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
}*root;
int main(){
    return 0;
}*/
#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to insert a new node in the binary tree
TreeNode* insert(TreeNode* root, int val) {
    if (root == nullptr) {
        return new TreeNode(val);
    }

    if (val < root->val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

// Function to perform an inorder traversal of the binary tree
void inorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    inorderTraversal(root->left);
    std::cout << root->val << " ";
    inorderTraversal(root->right);
}

// Function to search for a value in the binary tree
bool search(TreeNode* root, int val) {
    if (root == nullptr) {
        return false;
    }

    if (root->val == val) {
        return true;
    } else if (val < root->val) {
        return search(root->left, val);
    } else {
        return search(root->right, val);
    }
}

int main() {
    TreeNode* root = nullptr;

    // Insert nodes into the binary tree
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 6);
    root = insert(root, 8);

    // Perform inorder traversal and print the elements
    std::cout << "Inorder Traversal: ";
    inorderTraversal(root);
    std::cout << std::endl;

    // Search for a value in the binary tree
    int valueToFind = 6;
    if (search(root, valueToFind)) {
        std::cout << valueToFind << " exists in the binary tree." << std::endl;
    } else {
        std::cout << valueToFind << " does not exist in the binary tree." << std::endl;
    }

    // Clean up memory (optional, since it's a simple example)
    // In real-world scenarios, you should have a proper memory management strategy.
    delete root;

    return 0;
}
