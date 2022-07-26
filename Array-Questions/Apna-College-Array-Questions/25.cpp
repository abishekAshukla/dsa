#include <iostream>
using namespace std;
// #include <vector>

void findMin(int nums[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = nums[0];

    while (start <= end)
    {
        if (nums[mid] < nums[mid - 1])
        {
            ans = nums[mid];
        }
        else if (nums[mid] > nums[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    // return ans;
    cout << ans;
}

int main()
{
    // vector<int> v;
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(7);
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(2);
    // findMin(v);
    int arr[] = {3, 4, 5, 6, 7, 1, 2};
    findMin(arr, 7);
    return 0;
}