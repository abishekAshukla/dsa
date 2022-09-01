// Pointer arithmetic
#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *pointer = &i;
    cout<<pointer<<" - "<<*pointer<<endl;
    pointer++; // now pointer will point to next integer, means, adress stored in pointer is increased by 4(size of int)
    cout<<pointer<<" - "<<*pointer<<endl;

    return 0;
}