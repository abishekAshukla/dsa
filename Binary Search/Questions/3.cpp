// Find pivot element in sorted and reversed array

#include <iostream>
using namespace std;

int findPivot(int arr[], int size)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1; // pivot element could not be present on left
        }

        else if (arr[mid] < arr[0] && arr[mid] < arr[mid - 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[0] && !(arr[mid] < arr[mid - 1]))
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}

int main()
{
        int arr[] = {5 , 6 , 7 , 1 , 2 , 3};
        cout<<"continue dsa"<<endl;
        int arr2[] = {8 , 9 , 10 , 11 , 12 , 2 , 3 , 4 , 5 , 6};
        cout << "Pivot element is present at index " << findPivot(arr, 6) << endl;
        cout << "Pivot element is present at index " << findPivot(arr2, 10) << endl;

    return 0;
}
