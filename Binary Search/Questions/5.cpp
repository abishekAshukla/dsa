// search a element in sorted and reversed array
#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int pivot;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    pivot = start;  // till here , we found the pivot element in the array

    if (key >= arr[0])
    {
        start = 0;
        end = pivot - 1;
    }
    else
    {
        start = pivot;
        end = size - 1;
    }
    mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {10, 12, 18, 20, 22, 2, 4, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);

    cout << search(arr, size, 9);
    return 0;
}
