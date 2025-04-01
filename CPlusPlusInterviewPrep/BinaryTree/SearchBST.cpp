#include "SearchBST.h"
#include "TreeNode.h"

using std::vector;

TreeNode* SearchBST::searchBST(TreeNode* root, int val)
{
    if (root == nullptr || root->val == val) return root;

    if (val < root->val) 
        return searchBST(root->left, val);
    else 
        return searchBST(root->right, val);
}

TreeNode* SearchBST::deleteNode(TreeNode* root, int key)
{
    if (key == root->val)
    {
        TreeNode* temp = root;
        root = root->left;
    }

    
    if (key < root->val)
    {
        return deleteNode(root->left, key);
    }
    else
    {
        //if (root->val == key);
    }
}
    
