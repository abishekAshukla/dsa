#include <iostream>
using namespace std;

void findMinAndMax(int arr[], int size)
{
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Minimum is " << min << endl;
    cout << "Maximum is " << max << endl;
}

int main()
{
    int arr[] = {5, 16, 72, 3, 14};
    int size = sizeof(arr) / sizeof(int);
    findMinAndMax(arr, size);
    return 0;
}
