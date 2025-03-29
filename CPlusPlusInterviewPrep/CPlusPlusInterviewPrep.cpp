
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// Bring specific names into scope:
using std::unordered_map;
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::unordered_set;

vector<int> twoSum(vector<int>& nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target && i != j) return {i, j};
        }
    }
    return {};
}

vector<int> twoSumOptimized(const vector<int>& nums, int target)
{
    unordered_map<int, int> hashTable;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (hashTable.count(complement)){
            return {hashTable[complement], i};
        }
        hashTable[nums[i]] = i;
    }
    return {};
}


bool containsDuplicate(vector<int>& nums)
{
    unordered_set<int> set;
    for (auto value : nums)
    {
        if (set.count(value))
            return true;
        set.insert(value);
    }
    return false;
}




int main(int argc, char* argv[])
{
    // Test Case 1: Contains duplicates
    vector<int> nums5 = {1, 2, 3, 1};
    cout << "Test Case 1: " << (containsDuplicate(nums5) ? "Contains duplicates" : "No duplicates") << endl;

    // Test Case 2: No duplicates
    vector<int> nums6 = {1, 2, 3, 4};
    cout << "Test Case 2: " << (containsDuplicate(nums6) ? "Contains duplicates" : "No duplicates") << endl;

    // Test Case 3: Empty vector
    vector<int> nums7 = {};
    cout << "Test Case 3: " << (containsDuplicate(nums7) ? "Contains duplicates" : "No duplicates") << endl;

    // Test Case 4: Large vector with duplicates
    vector<int> nums8 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 11};
    cout << "Test Case 4: " << (containsDuplicate(nums8) ? "Contains duplicates" : "No duplicates") << endl;

    
    // Test case 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = twoSum(nums1, target1);
    cout << "Test Case 1: ";
    if (!result1.empty()) {
        cout << "[" << result1[0] << ", " << result1[1] << "]" << endl;
    } else {
        cout << "No solution found" << endl;
    }

    // Test case 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = twoSum(nums2, target2);
    cout << "Test Case 2: ";
    if (!result2.empty()) {
        cout << "[" << result2[0] << ", " << result2[1] << "]" << endl;
    } else {
        cout << "No solution found" << endl;
    }

    // Test case 3
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = twoSum(nums3, target3);
    cout << "Test Case 3: ";
    if (!result3.empty()) {
        cout << "[" << result3[0] << ", " << result3[1] << "]" << endl;
    } else {
        cout << "No solution found" << endl;
    }

    // Test case 4: no solution
    vector<int> nums4 = {1,2,3,4};
    int target4 = 10;
    vector<int> result4 = twoSum(nums4, target4);
    cout << "Test Case 4: ";
    if (!result4.empty()) {
        cout << "[" << result4[0] << ", " << result4[1] << "]" << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}

