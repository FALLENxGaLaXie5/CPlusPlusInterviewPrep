#include "ContainerMostWater.h"

#include <algorithm>

using std::vector;
using std::min;
using std::abs;
using std::max;


int ContainerMostWater::maxArea(vector<int>& heights)
{
    int maxArea = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        for (int j = 0; j < heights.size(); j++)
        {
            if (i == j) continue;

            int width = abs(j - i);
            int height = min(heights[i], heights[j]);
            int area = width * height;
            maxArea = max(area, maxArea);
        }
    }
    return maxArea;
}

int ContainerMostWater::maxAreaOptimized(std::vector<int>& height)
{
    int maxArea = 0;
    int low = 0;
    int high = height.size() - 1;

    while (low < high)
    {
        int width = high - low;
        int currentHeight = min(height[low], height[high]);
        int area = width * currentHeight;
        maxArea = max(area, maxArea);

        if (height[low] < height[high])
            low++;
        else
            high--;
    }
    return maxArea;
}
