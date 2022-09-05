#include <iostream>
using namespace std;

void printDynamicArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    char *ch = new char;
    // memory allocated in heap
    // dynamic memory allocation
    // Working: 'new' keyword is used to allocate memory in heap(dyanamic memory allocation), by doing so, it only returns address not any name to access it, by pointing a pointer to that address, we can access that memory
    // it consumes 9 bytes of memory: ch(8 in stack) + char(1 in heap)

    // how to create an array dynamically
    int number = 5;
    // int arrr[number]; // this is bad practice because, memory will be allocated at runtime, doesnt provides sureity

    // int *arr = new int[number];
    // total memory consumed: arr(8) + int(4)*5 = 8 + 20 = 28

    int input;
    cin >> input;
    int *arr2 = new int[input];
    for (int i = 0; i < input; i++)
    {
        cin >> arr2[i];
    }
    printDynamicArray(arr2, input);

    delete []arr2;
    // Allocated static memory gets deleted automatically when block ends
    // but, we have to delete allocated dynamic memory manually using the 'delete' keyword
    // delete []arr , for deleting dynamic array
    // delete i, for deleting dynamic variable

    return 0;
}