#include <iostream>
using namespace std;
#include <algorithm>

int maxSubArr(int nums[], int n)
{
    int ans = nums[0];
    int maxi = ans;
    int mini = ans;

    // int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i] < 0)
        {
            swap(maxi, mini);
        }
        maxi = max(nums[i], maxi * nums[i]);
        mini = min(nums[i], mini * nums[i]);
        ans = max(ans, maxi);
    }
    return ans;
}

int main()
{
    int arr[] = {3, -1, 4};
    int size = sizeof(arr) / sizeof(int);
    cout<<maxSubArr(arr, size);
    return 0;
}