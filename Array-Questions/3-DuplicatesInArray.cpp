// Find all duplicates in an array  Leetcode 442
#include <iostream>
#include <cstdlib>
using namespace std;

int findAllDuplicates(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]) - 1;

        if (arr[index] < 0)
        {
            cout << abs(arr[i]) << endl;
        }
        else
        {
            arr[index] = -arr[index];
        }
    }
}

int main()
{
    int arr[] = {1, 2, 4, 3, 5, 2, 4};
    int size = sizeof(arr) / sizeof(int);

    findAllDuplicates(arr, size);

    return 0;
}

