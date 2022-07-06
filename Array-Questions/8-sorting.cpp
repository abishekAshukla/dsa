// Sort the given array elements from 0 to 2

#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SortZeroToTwo(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 2, 2, 1, 2, 0, 1, 1, 0, 1, 2};
    int size = sizeof(arr) / sizeof(int);

    printArray(arr, size);
    SortZeroToTwo(arr, size);
    printArray(arr, size);

    return 0;
}
