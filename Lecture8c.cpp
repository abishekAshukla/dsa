// Write a program to reverse an array

#include <iostream>
using namespace std;

void reverseArray(int arr[], int reversedArr[], int n)
{
    for (int i = n, j = 0; i > 0; i--, j++)
    {
        int temp = arr[i - 1];
        reversedArr[j] = temp;
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
    int arr[] = {11, 98, 23, 87, 55, 3, 2, 1};
    int reversedArr[sizeof(arr)/sizeof(int)];

    printArray(arr, sizeof(arr)/sizeof(int)); cout << endl;
    reverseArray(arr, reversedArr, sizeof(arr)/sizeof(int));
    printArray(reversedArr, sizeof(arr)/sizeof(int)); cout << endl;

    return 0;
}
