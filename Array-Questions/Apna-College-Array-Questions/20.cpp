#include <iostream>
using namespace std;

void duplicateAndMissing(int arr[], int size)
{
    int duplicate = 0;
    int missing = 0;

    // finding duplicate element : Dutch national flag algorithm
    for (int i = 0; i < size; i++)
    {
        int index = abs(arr[i]) - 1;

        if (arr[index] < 0)
        {
            duplicate = abs(arr[i]);
        }
        else
        {
            arr[index] = -arr[index];
        }
    }

    // finding missing element
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            missing = i + 1;
            break;
        }
    }

    cout << "Duplicate: " << duplicate << " Missing: " << missing << endl;
}

int main()
{
    int arr[] = {3, 1, 5, 2, 3};
    int size = sizeof(arr) / sizeof(int);
    duplicateAndMissing(arr, size);

    return 0;
}