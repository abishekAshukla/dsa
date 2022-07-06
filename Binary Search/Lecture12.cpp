#include <iostream>
using namespace std;

// Time Complexity of Binary search is O(log N)

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // equivalent to (start + end)/2 but, it doesn't works when the values are out of integer range

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        int mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = BinarySearch(even, 6, 12);
    cout << "Index of 12 is " << evenIndex << endl;

    return 0;
}
