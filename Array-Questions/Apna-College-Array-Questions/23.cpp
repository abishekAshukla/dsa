#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

vector<int> productExceptSelf(vector<int> &nums) // some error
{
    vector<int> left;
    int leftSideProduct = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        leftSideProduct = leftSideProduct * nums[i];
        left.push_back(leftSideProduct);
    }
    for (int i = 0; i < left.size(); i++)
    {
        cout << left[i] << " ";
    }
    cout << endl;
    vector<int> right;
    int rightSideProduct = 1;
    for (int i = (nums.size() - 1); i >= 0; i--)
    {
        rightSideProduct = rightSideProduct * nums[i];
        right.push_back(rightSideProduct);
    }
    reverse(right.begin(), right.end());
    for (int i = 0; i < right.size(); i++)
    {
        cout << right[i] << " ";
    }

    nums[0] = right[1];                            // handling exceptions
    nums[nums.size() - 1] = left[left.size() - 2]; // handling exceptions

    for (int i = 1; i < (nums.size() - 2); i++)
    {
        nums[i] = left[i - 1] * right[i + 1];
    }

    cout << endl;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        cout << nums[i] << " ";
    }
}

vector<int> productExceptSelf2(vector<int> &nums)
{
    int n = nums.size();

    vector<int> left;
    int leftSideProduct = 1;
    for (int i = 0; i < n; i++)
    {
        leftSideProduct = leftSideProduct * nums[i];
        left.push_back(leftSideProduct);
    }

    int prod = 1;
    for (int i = (n - 1); i >= 1; i--)
    {
        int temp = nums[i];
        nums[i] = left[i - 1] * prod;
        prod = prod * temp;
    }
    nums[0] = prod; // handling exception

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return nums;
}

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(1);
    v.push_back(6);
    // v.push_back(5);
    productExceptSelf2(v);
    return 0;
}