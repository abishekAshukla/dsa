// https://www.geeksforgeeks.org/chocolate-distribution-problem/

#include <iostream>
using namespace std;

void minDifference(int arr[], int size, int m)
{
    // first sort the array

    int minDiff = arr[m - 1] - arr[0];
    int indexOfFirstPacket = 0;

    for (int i = 0; i <= (size - m); i++)
    {
        if ((arr[i + m - 1] - arr[i]) < minDiff)
        {
            minDiff = arr[i + m - 1] - arr[i];
            indexOfFirstPacket = i;
        }
    }
    cout << "Min difference is " << minDiff << endl;
    cout << arr[indexOfFirstPacket] << endl;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(int argc, char const *argv[])

{
    int arr[] = {1, 3, 4, 7, 9, 9, 56, 12};
    int size = sizeof(arr) / sizeof(int);
    minDifference(arr, size, 5);
    return 0;
}
