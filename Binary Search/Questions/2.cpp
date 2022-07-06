// Peak index in a mountain array

// https://leetcode.com/problems/peak-index-in-a-mountain-array/

#include <iostream>
using namespace std;

int findPeak(int arr[], int size)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid])
        {
            return mid;
        }
        else if (arr[mid - 1] < arr[mid] && arr[mid + 1] > arr[mid])
        {
            s = mid + 1;
        }
        else if (arr[mid - 1] > arr[mid] && arr[mid + 1] < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 5, 4, 3, 2};
    int arr2[] = {3, 4, 5, 6, 5, 5, 4, 2};
    cout << "Peak element is present at index " << findPeak(arr, 9) << endl;
    cout << "Peak element is present at index " << findPeak(arr2, 8) << endl;

    return 0;
}
