#include <iostream>
using namespace std;
// Introduction to Pointers

int main()
{
    int num = 5;
    // cout<<&num<<endl;
    int *pointer = &num;
    // cout<<pointer<<endl;
    // cout<<&pointer<<endl;

    char ch = 'a';
    // cout<<ch<<endl;
    char *charpointer = &ch;
    // cout<<charpointer<<endl;
    // cout<<&ch<<endl;
    // cout<<*charpointer<<endl;
    // cout<<&charpointer<<endl;

    // int *p; // this is very BAD practice, it is pointing to any random memory, which is dangerous
    //  so, atleast point to null

    // another way of initilizing pointer
    int i = 2;
    int *p = 0;
    p = &i; // observe that, '*' is not used here
    cout << p << endl;
    cout << *p << endl;

    // Note: it takes 8 bytes of memory to store address of variable of any type

    return 0;
}