#include <iostream>
using namespace std;

// Swap alternate members in an array

void swapAlternate(int arr[], int n)
{
    for (int i = 0;  i < n - 1; i+=2)
    {
        // int temp = arr[i];
        // arr[i] = arr[i+1];
        // arr[i+1] = temp;
        swap(arr[i], arr[i+1]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int array[] = {23, 45, 12, 98, 23, 56, 101, 9};
    int sizeOfArray = sizeof(array) / sizeof(int);

    printArray(array, sizeOfArray);
    cout << endl;
    swapAlternate(array, sizeOfArray);
    printArray(array, sizeOfArray);
    cout << endl;

    return 0;
}
