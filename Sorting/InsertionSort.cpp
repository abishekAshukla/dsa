#include <iostream>
using namespace std;

/*

Time complexity = O(n^2)
Best case time complexity = O(n)
Space Complexity = O(1)

*/

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j;

        for (j = i; j > 0; j--)
        {
            if (arr[i] > arr[j - 1])
            {
                break;
            }
        }

        for (int k = i; k > j; k--)
        {
            arr[k] = arr[k - 1];
        }

        arr[j] = temp;
    }
}

int main()
{
    int arr[] = {10 , 99 , 23 ,  33 , 1};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    insertionSort(arr, size);
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
