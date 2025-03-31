#include "TreeNode.h"

TreeNode::TreeNode() : val(0), left(nullptr), right(nullptr) {}

TreeNode::TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}

TreeNode::TreeNode(int value, TreeNode* leftChild, TreeNode* rightChild) : val(value), left(leftChild), right(rightChild) {}

TreeNode::~TreeNode(){
    // Recursively delete the children if they exist.
    delete left;
    delete right;
}

TreeNode* TreeNode::InvertTree(TreeNode* root)
{
    if (root == nullptr) return nullptr;

    TreeNode* left = root->left;
    root->left = InvertTree(root->right);
    root->right = InvertTree(left);

    return root;
}
