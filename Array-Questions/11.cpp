// https://leetcode.com/problems/move-zeroes/

#include <iostream>
using namespace std;

void sortZero(int arr[], int size)
{
    int p = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == 0 && arr[0] != 0)  // handling the exception
        {
            p++;
            continue;
        }

        if (arr[i] != 0)  // searching for non-zero value
        {
            arr[p] = arr[i];
            arr[i] = 0;
            p++;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {4, 0, 3, 0, 1, 0, 0, 2, 0};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    sortZero(arr, size);
    printArray(arr, size);
    return 0;
}
