// First and Last Position of an Element In Sorted Array

// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1; // even if we got the index we will still search in the left because we want to find left most index and another element can be present on the left side
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int LastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[] = {1, 2, 3, 3, 3, 4, 5, 6, 6};
    cout << "First element is at index " << firstOcc(even, 9, 3)<<endl;
    cout << "Last element is at index " << LastOcc(even, 9, 3)<<endl;

    int Total_number_of_occurences  = LastOcc(even, 9, 3) - firstOcc(even, 9, 3) + 1;
    cout<<"Total number of occurences are "<<Total_number_of_occurences<<endl;
    
    return 0;
}
