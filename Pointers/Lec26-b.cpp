#include <iostream>
using namespace std;
// Pointers in character arrays

int main()
{
    char ch[6] = "aeiou";
    cout<<ch<<endl;
    // ^ in case of integer array, name of array gives address of first element, but, in character array, it gives all elements

    char *c = &ch[2];
    cout<<c<<endl;

    // so address of any element of character array gives the string from that element
    return 0;
}