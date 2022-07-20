#include <iostream>
using namespace std;

void reverseArr(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void nextPermutation(int arr[], int size)
{
    int k = -1;

    // null checks (good practice)
    if (size == 0)
        return;

    // find k
    for (int i = size - 2; i >= 0; i--)
    {
        if (arr[i] <= arr[i + 1])
        {
            k = i;
            break;
        }
    }

    if (k == -1) // it is already at it's last permutation, so it's next permutation will be the first one
    {
        reverseArr(arr, 0, size - 1);
        return;
    }

    for (int i = size - 1; i > 0; i--) // find a value which is next greater than k and swapping them
    {
        if (arr[i] > arr[k])
        {
            swap(arr[i], arr[k]);
            break;
        }
    }

    reverseArr(arr, k + 1, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    nextPermutation(arr, size);
    printArray(arr, size);
    return 0;
}