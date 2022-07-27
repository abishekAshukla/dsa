#include <iostream>
using namespace std;
#include <algorithm>

int findPivot(int nums[], int n)
{
    int ans = 10000;
    int indexOfPivot;

    int s = 0, e = n - 1;
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
            indexOfPivot = mid;
            e = mid - 1;
        }
    }
    if (nums[indexOfPivot + 1] < nums[indexOfPivot])
    {
        return indexOfPivot + 1;
    }

    return indexOfPivot;
}

void twoPairSum(int arr[], int n, int sum)
{
    int r = findPivot(arr, n); // index of smallest element
    int l = r - 1;             // index of largest element

    while (r != l)
    {
        if ((arr[l] + arr[r]) == sum)
        {
            cout << l << " , " << r << endl;
            break;
        }
        else if ((arr[l] + arr[r]) < sum)
        {
            r++;
        }
        else
        {
            l--;
        }
    }
}

int main()
{
    int arr[] = {29, 32, 33, 34, 38, 12, 24, 25, 27};
    int size = sizeof(arr) / sizeof(int);
    // cout << twoPairSum(arr, size, 2);
    twoPairSum(arr, size, 58);

    return 0;
}