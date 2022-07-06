#include <iostream>
using namespace std;

int PeakElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid])
        {
            return mid;
        }
        else if (arr[mid + 1] > arr[mid])
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

int main()
{
    cout << "Hello world" << endl;
    int arr[] = {2, 4, 6, 8, 10, 11, 15, 22, 7, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    cout << PeakElement(arr, size);
    return 0;
}
