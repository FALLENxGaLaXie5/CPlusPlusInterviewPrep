#ifndef TWOSUM_H
#define TWOSUM_H

#include <vector>

class TwoSum {
public:
    static std::vector<int> findTwoSum(std::vector<int>& nums, int target);
    static std::vector<int> findTwoSumOptimized(const std::vector<int>& nums, int target);
};

#endif // TWOSUM_H
