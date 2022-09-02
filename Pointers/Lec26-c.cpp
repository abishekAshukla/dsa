#include <iostream>
using namespace std;
// Pointers in functions

void print(int *p)
{
    cout << p << endl;  // printing address
    cout << *p << endl; // printing value
}

void updateAddress(int *p) // address wont be updated
{
    p = p + 1;
}

void updateValue(int *p) // value will be updated
{
    *p = *p + 1;
    // *p++; // not valid syntax for pointers
}

int main()
{
    int value = 5;
    int *p = &value;
    // print(p);
    cout << "Before: " << *p << endl;
    // updateAddress(p);
    updateValue(p);
    cout << "After: " << *p << endl;
    return 0;
}