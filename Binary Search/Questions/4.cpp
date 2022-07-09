// Find pivot element in sorted and reversed array
#include <iostream>
using namespace std;

int pivotElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)  // focus that, here, start < end not start <= end
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid; // focus that, here end = mid not mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return start;
    // or return end;
}

int main()
{
    int arr[] = {10, 12, 18, 2, 4, 6, 7};
    int size = sizeof(arr) / sizeof(int);

    cout << pivotElement(arr, size);
    return 0;
}
