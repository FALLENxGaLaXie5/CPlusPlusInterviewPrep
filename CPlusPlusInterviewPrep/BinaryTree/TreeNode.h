#pragma once

#include <string> // Add this include

class TreeNode
{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    // Default constructor
    TreeNode();
    // Constructor with value
    TreeNode(int value);
    // Constructor with value and children
    TreeNode(int value, TreeNode* leftChild, TreeNode* rightChild);
    // Destructor to prevent memory leaks.
    ~TreeNode();

    static TreeNode* InvertTree(TreeNode* root);
};
