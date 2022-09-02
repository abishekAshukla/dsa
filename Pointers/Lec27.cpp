#include <iostream>
using namespace std;

void change(int **p)
{
    // p = p + 1; // no changes at all

    *p = *p + 1; // value of 'i' and address of 'i' gets changed

    // **p = **p + 1; //value of 'i' gets changed
}

int main()
{
    int i = 5;
    int *pointer = &i;
    int **doublePointer = &pointer;

    // printing value of i variable
    cout << i << endl;
    cout << *pointer << endl;
    cout << **doublePointer << endl;

    // printing address of i variable
    cout << &i << endl;
    cout << pointer << endl;
    cout << *doublePointer << endl;

    // printing address of pointer variable
    cout << &pointer << endl;
    cout << doublePointer << endl;

    // printing address of doublePointer variable
    cout << &doublePointer << endl;

    change(doublePointer);

    cout << i << endl;
    cout << *pointer << endl;
    cout << **doublePointer << endl;

    // printing address of i variable
    cout << &i << endl;
    cout << pointer << endl;
    cout << *doublePointer << endl;

    // printing address of pointer variable
    cout << &pointer << endl;
    cout << doublePointer << endl;

    // printing address of doublePointer variable
    cout << &doublePointer << endl;
    return 0;
}