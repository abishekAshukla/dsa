#include <iostream>
using namespace std;
#include <vector>
#include <math.h>
#include <algorithm>

void trap(vector<int> &height)
{
    vector<int> left;
    vector<int> right;

    // filling 'left'
    int highest = height[0];
    for (int i = 0; i < height.size(); i++)
    {
        if (height[i] > highest)
        {
            highest = height[i];
        }
        left[i] = highest;
    }

    // filling 'right'
    int highestForRight = height[height.size() - 1];
    for (int i = height.size() - 1; i >= 0; i--)
    {
        if (height[i] > highestForRight)
        {
            highestForRight = height[i];
        }
        left[i] = highestForRight;
    }

    int ans = 0;
    for (int i = 0; i < height.size(); i++)
    {
        ans += min(left[i], right[i]) - height[i];
    }
    // return ans;
}

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    // cout<<trap(v);
    cout<<"hello";
    return 0;
}