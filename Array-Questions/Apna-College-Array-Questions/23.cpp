#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

vector<int> productExceptSelf(vector<int> &nums)
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

cout<<endl;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        cout<<nums[i]<<" ";
    }
    
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    productExceptSelf(v);
    return 0;
}