#include "TwoSum.h"
#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;

vector<int> TwoSum::findTwoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target && i != j) return {i, j};
        }
    }
    return {};
}

vector<int> TwoSum::findTwoSumOptimized(const vector<int>& nums, int target) {
    unordered_map<int, int> hashTable;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (hashTable.count(complement)) {
            return {hashTable[complement], i};
        }
        hashTable[nums[i]] = i;
    }
    return {};
}