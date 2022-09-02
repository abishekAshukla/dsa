#include <iostream>
using namespace std;
// Pointers in character arrays

int main()
{
    char ch[6] = "aeiou";
    cout << ch << endl;
    // ^ in case of integer array, name of array gives address of first element, but, in character array, it gives all elements

    char *c = &ch[2];
    cout << c << endl;

    // so address of any element of character array gives the string from that element

    char s[] = "hello";
    char *p = s; // p stores address of first element of array 's'
    cout<<*p<<endl;
    cout<<p<<endl; // address of element of char array gives whole string
    cout<<p[2]<<endl; // 3rd element of 'hello', since p stores address which gives whole string


    char arr[20];
    *(arr + 1) = 65;
    arr[2] = 66;
    cout<<arr[1]<<" "<<arr[2]<<endl;
    // https://www.codingninjas.com/codestudio/guided-paths/pointers/content/235644/offering/3169074
    // practice above question
    return 0;
}