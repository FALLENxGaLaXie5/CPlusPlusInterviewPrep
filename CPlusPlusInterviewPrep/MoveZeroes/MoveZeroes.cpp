#include "MoveZeroes.h"

using std::vector;
using std::swap;

void MoveZeroes::moveZeroes(vector<int>& nums)
{
    int left = 0;

    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] != 0) {
            swap(nums[right], nums[left]);
            left++;
        }
    }  
}
