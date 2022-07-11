// Bubble Sort Algorithm

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break; // if no swapping occured after completion of internal loop, it means whole array is already sorted
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[] = {99, 23, 89, 34, 56, 12};
    printArray(arr1, 6);
    bubbleSort(arr1, 6);
    cout << endl;
    printArray(arr1, 6);
    return 0;
}
