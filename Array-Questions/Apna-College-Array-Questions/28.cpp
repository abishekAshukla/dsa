#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int> &height)
{
    int maxArea = 0;
    int mid = 0;
    for (int i = 0; i < height.size(); i++)
    {
        if (height[i] > height[mid])
        {
            mid = i;
        }
    }

    int maxHeightLeft = mid;
    int maxHeightRight = mid + 1;

    for (int i = mid + 1; i < height.size() - 1; i++)
    {
        if (height[i] >= height[maxHeightRight])
        {
            maxHeightRight = i;
        }
    }
    maxArea = min(height[maxHeightLeft], height[maxHeightRight]) * (maxHeightRight - maxHeightLeft);
    for (int i = maxHeightLeft - 1; i >= 0; i--)
    {
        if ((min(height[i], height[maxHeightRight]) * (maxHeightRight - i)) > maxArea)
        {
            maxHeightLeft = i;
        }
    }
    for (int i = maxHeightRight + 1; i <= height.size() - 1; i++)
    {
        if ((min(height[i], height[maxHeightLeft]) * (i - maxHeightLeft)) > maxArea)
        {
            maxHeightRight = i;
        }
    }
    maxArea = min(height[maxHeightLeft], height[maxHeightRight]) * (maxHeightRight - maxHeightLeft);

    return maxArea;
}

int maxArea2(vector<int> &height)
{
    int start = 0;
    int end = height.size() - 1;
    int area; 
    int maxArea = 0;

    while (start < end)
    {
        area = min(height[start], height[end]) * (end - start);
        if (area > maxArea)
            maxArea = area;

        if (min(height[start], height[end]) == height[start])
            start++;
        else
            end--;
    }
    return maxArea;
}

int main()
{
    vector<int> heights;
    // heights.push_back(1);
    // heights.push_back(8);
    // heights.push_back(6);
    // heights.push_back(2);
    // heights.push_back(5);
    // heights.push_back(4);
    // heights.push_back(8);
    // heights.push_back(3);
    // heights.push_back(7);
    // heights.push_back(1);
    // heights.push_back(2);
    // heights.push_back(4);
    // heights.push_back(3);

    heights.push_back(2);
    heights.push_back(3);
    heights.push_back(4);
    heights.push_back(5);
    heights.push_back(18);
    heights.push_back(17);
    heights.push_back(6);
    cout<<maxArea(heights);
    return 0;
}