#include "ContainsDuplicate.h"
#include <unordered_set>

using std::vector;
using std::unordered_set;


bool ContainsDuplicate::checkContainsDuplicate(const vector<int>& nums) {
    unordered_set<int> set;
    for (auto value : nums) {
        if (set.count(value))
            return true;
        set.insert(value);
    }
    return false;
}