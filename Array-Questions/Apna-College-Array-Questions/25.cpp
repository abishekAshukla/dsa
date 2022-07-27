#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int findMin(vector<int> &nums)
{
    int ans = 10000;
    if (nums[0] < nums.back())
        return nums[0]; // if array is not rotated
    if (nums.size() == 1)
        return nums[0];

    int s = 0, e = nums.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] >= nums[0])
        {
            s = mid + 1;
        }
        else
        {
            ans = min(ans, nums[mid]);
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> v1;
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(1);
    v1.push_back(2);
    cout << findMin(v1);
    return 0;
}