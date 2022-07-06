#include <iostream>
using namespace std;

void sortZeroToOne(int arr[], int n)
{
    int countOfZero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            countOfZero++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (countOfZero != 0)
        {
            arr[i] = 0;
            countOfZero--;
        }
        else
        {
            arr[i] = 1;
        }
    }
}

void sortZeroToOne2(int arr[], int n)
{
    int left = 0, right = n - 1;

    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }

        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0};
    int size1 = sizeof(arr1) / sizeof(int);

    printArray(arr1, size1);
    sortZeroToOne2(arr1, size1);
    printArray(arr1, size1);

    return 0;
}
