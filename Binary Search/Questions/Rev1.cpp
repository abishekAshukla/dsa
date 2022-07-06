#include <iostream>
using namespace std;

int BinSrch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    cout << "Hello world" << endl;
    int arr[6] = {2, 4, 6, 8, 10};
    cout<<BinSrch(arr , 6 , 2);
    return 0;
}
