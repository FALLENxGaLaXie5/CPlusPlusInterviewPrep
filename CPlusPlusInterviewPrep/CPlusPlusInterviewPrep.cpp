
#include <iostream>
#include <vector>

#include "ContainsDuplicate.h"
#include "TwoSum.h"
#include "BinaryTree/TreeNode.h"

// Bring specific names into scope:
using std::vector;
using std::cout;
using std::endl;

void testContainsDuplicate() {
    ContainsDuplicate containsDuplicate;

    // Test Case 1: Contains duplicates
    vector<int> nums1 = {1, 2, 3, 1};
    cout << "Test Case 1: " << (ContainsDuplicate::checkContainsDuplicate(nums1) ? "Contains duplicates" : "No duplicates") << endl;

    // Test Case 2: No duplicates
    vector<int> nums2 = {1, 2, 3, 4};
    cout << "Test Case 2: " << (ContainsDuplicate::checkContainsDuplicate(nums2) ? "Contains duplicates" : "No duplicates") << endl;

    // Test Case 3: Empty vector
    vector<int> nums3 = {};
    cout << "Test Case 3: " << (ContainsDuplicate::checkContainsDuplicate(nums3) ? "Contains duplicates" : "No duplicates") << endl;

    // Test Case 4: Large vector with duplicates
    vector<int> nums4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 11};
    cout << "Test Case 4: " << (ContainsDuplicate::checkContainsDuplicate(nums4) ? "Contains duplicates" : "No duplicates") << endl;
}

void testTwoSum() {
    TwoSum twoSum;

    // Test case 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = TwoSum::findTwoSum(nums1, target1);
    cout << "Test Case 1: ";
    if (!result1.empty()) {
        cout << "[" << result1[0] << ", " << result1[1] << "]" << endl;
    } else {
        cout << "No solution found" << endl;
    }

    // Test case 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = TwoSum::findTwoSum(nums2, target2);
    cout << "Test Case 2: ";
    if (!result2.empty()) {
        cout << "[" << result2[0] << ", " << result2[1] << "]" << endl;
    } else {
        cout << "No solution found" << endl;
    }

    // Test case 3
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = TwoSum::findTwoSum(nums3, target3);
    cout << "Test Case 3: ";
    if (!result3.empty()) {
        cout << "[" << result3[0] << ", " << result3[1] << "]" << endl;
    } else {
        cout << "No solution found" << endl;
    }

    // Test case 4: no solution
    vector<int> nums4 = {1, 2, 3, 4};
    int target4 = 10;
    vector<int> result4 = TwoSum::findTwoSum(nums4, target4);
    cout << "Test Case 4: ";
    if (!result4.empty()) {
        cout << "[" << result4[0] << ", " << result4[1] << "]" << endl;
    } else {
        cout << "No solution found" << endl;
    }
}

void printTree(TreeNode* root, const std::string& prefix = "", bool isLeft = true) {
    if (root != nullptr) {
        cout << prefix;
        cout << (isLeft ? "|--" : "\\--"); // Changed here
        cout << root->val << endl;

        printTree(root->left, prefix + (isLeft ? "|   " : "    "), true); // Changed here
        printTree(root->right, prefix + (isLeft ? "|   " : "    "), false); // Changed here
    }
}

void deleteTree(TreeNode* root) {
    if (root != nullptr) {
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
    }
}

void testInvertTree() {
    // Create a sample tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Original Tree:" << endl;
    printTree(root);

    // Invert the tree
    TreeNode::InvertTree(root);

    cout << "\nInverted Tree:" << endl;
    printTree(root);

    // Free the allocated memory to prevent memory leaks
    deleteTree(root);
}


int main(int argc, char* argv[])
{
    testContainsDuplicate();
    testTwoSum();
    testInvertTree();
    return 0;
}

