#include <iostream>
using namespace std;
// Pointers in integer arrays

int main()
{
    int arr[10] = {0, 2, 1, 3, 4, 5};
    cout << arr << endl; // address of first element of the array
    cout << &arr[1] << endl;
    cout << *(&arr[1]) << endl;
    cout << *arr << endl;       // value at '0th' location
    cout << *(arr + 1) << endl; // value at '1st' location
    cout << *(arr + 2) << endl; // value at '2nd' location
    cout << *(arr + 2) << endl; // value at '2nd' location
    // formula: arr[i] = *(arr + i)

    // something cool and new way of doing things with array
    cout << 3 [arr] << endl; // equivalent to arr[3]
    cout << *(3 + arr) << endl;
    // formula: arr[i] = i[arr] = *(arr + i) = *(i + arr)

    return 0;
}