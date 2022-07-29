#include <iostream>
using namespace std;
#include <vector>

// vector<vector<int>> sortVector(vector<int> &nums)
// {
//     sort(nums.begin(), nums.end());
// }
int search(vector<int> &nums, int val, int start)
{
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (nums[mid] == val)
        {
            return mid;
        }
        else if (nums[mid] < val)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

vector<int> twoSum(vector<int> &nums, int sum)
{
    vector<int> twoSumAns;

    // Sort the vector

    for (int i = 0; i < nums.size() - 2; i++)
    {
        // search for (sum - nums[i])
        int val = sum - nums[i];
        int sr = search(nums, val, i + 1);
        if (sr != -1)
        {
            // cout << nums[i] << " , " << nums[sr] << endl;
            twoSumAns.push_back(nums[i]);
            twoSumAns.push_back(nums[sr]);
        }
    }
    return twoSumAns;
}

void threeSum(vector<int> &nums)
{

    // vector<vector<int>> ans;
    for (int i = 0; i < nums.size() - 3; i++)
    {
        int sum = (0 - nums[i]);

        vector<int> two = twoSum(nums, sum);
        if (two.size() != 0)
        {
            two.push_back(nums[i]);
            // ans.push_back(two);
            for (int i = 0; i < two.size(); i++)
            {
                cout << two[i] << " , ";
            }
            cout << endl;
        }
    }
}

int main()
{
    vector<int> v1;
    v1.push_back(-4);
    // v1.push_back(-2);
    v1.push_back(-1);
    v1.push_back(-1);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(2);
    // v1.push_back(4);
    // v1.push_back(6);
    // twoSum(v1, 2);
    threeSum(v1);
    return 0;
}