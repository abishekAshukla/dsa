// Pointer arithmetic
#include <iostream>
using namespace std;

// https://www.codingninjas.com/codestudio/guided-paths/pointers/content/235644/offering/3168914
// ^ study above question

int main()
{
    int i = 5;
    int *pointer = &i;
    cout<<pointer<<" - "<<*pointer<<endl;
    pointer++; // now pointer will point to next integer, means, adress stored in pointer is increased by 4(size of int)
    cout<<pointer<<" - "<<*pointer<<endl;

    return 0;
}